#pragma once
#include<bitset>
#include<string>
#include<vector>
using namespace std;
void regCodes_init();
bitset<5> regCode(string regName);
string bit_2_hex(bitset<32> in_word);
struct operands;
struct ALUresult;
class Instruction;
struct parseResult;
int code(string op);
string name(int op);
vector<string> get(string s);
parseResult parse(string line);
bool is_imm(string str);
class RF;
class ALU;
class Memory;
class DRAM_req;
class MRM;
int action();
bitset<5> getOffset(int& offset,string Address);
bool independent(DRAM_req req1, DRAM_req req2);
bool independent(DRAM_req request, Instruction curr_inst, int j);
bool independent(DRAM_req curr_req);
bool independent(Instruction curr_inst, int j);
void execute(Instruction curr_inst,ALU& my_ALU, Memory& my_mem, RF& RegFile, int core_num);
void interpret(vector<ALU>& my_ALUs, Memory& my_mem, vector<RF>& RegFiles, vector<vector<int>>& ins_counts);

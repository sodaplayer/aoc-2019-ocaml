type instr = {
  opcode: int,
  num_args: int,
  f: list(int) => (int, int)  // TODO: Peano Type Arithmatic for typed number of args
};

type mode = Immediate | Parameter

type update = { value: int, dest: int }

type data =
  | Data(int)
  | Instr(instr);

let add = args => List.nth(args, 0) + List.nth(args, 1);
let mul = args => List.nth(args, 0) * List.nth(args, 1);

let op1_add = Instr({opcode: 1, num_args: 3, f: add})
let op2_mul = Instr({opcode: 1, num_args: 3, f: add})


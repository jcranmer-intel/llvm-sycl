/* The error code name should be meaningful since it is part of error message */
_SPIRV_OP(Success, "")
_SPIRV_OP(InvalidTargetTriple,
          "Expects spir-unknown-unknown or spir64-unknown-unknown.")
_SPIRV_OP(InvalidAddressingModel, "Expects 0-2.")
_SPIRV_OP(InvalidMemoryModel, "Expects 0-3.")
_SPIRV_OP(InvalidFunctionControlMask, "")
_SPIRV_OP(InvalidBuiltinSetName, "Expects OpenCL.std.")
_SPIRV_OP(InvalidFunctionCall, "Unexpected llvm intrinsic:")
_SPIRV_OP(InvalidArraySize, "Array size must be at least 1:")
_SPIRV_OP(InvalidModule, "Invalid SPIR-V module:")
_SPIRV_OP(UnimplementedOpCode, "Unimplemented opcode")
_SPIRV_OP(FunctionPointersDisallowed, "Can't translate the function pointer:\n")

set(LLVM_LINK_COMPONENTS support)

add_clang_library(clangTidyCERTModule
  CERTTidyModule.cpp
  CommandProcessorCheck.cpp
  DontModifyStdNamespaceCheck.cpp
  FloatLoopCounter.cpp
  LimitedRandomnessCheck.cpp
  PostfixOperatorCheck.cpp
  ProperlySeededRandomGeneratorCheck.cpp
  SetLongJmpCheck.cpp
  StaticObjectExceptionCheck.cpp
  StrToNumCheck.cpp
  ThrownExceptionTypeCheck.cpp
  VariadicFunctionDefCheck.cpp

  LINK_LIBS
  clangAST
  clangASTMatchers
  clangBasic
  clangLex
  clangTidy
  clangTidyBugproneModule
  clangTidyGoogleModule
  clangTidyMiscModule
  clangTidyPerformanceModule
  clangTidyReadabilityModule
  clangTidyUtils
  )

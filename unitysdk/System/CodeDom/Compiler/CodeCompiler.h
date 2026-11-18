#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/Compiler/CodeGenerator.h"

namespace System { class String; }
namespace System::CodeDom { class CodeCompileUnit; }
namespace System::CodeDom::Compiler { class CompilerParameters; }
namespace System::CodeDom::Compiler { class CompilerResults; }

#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMDOMBATCH_OFFSET UNITYSDK_OFFSET(0x1DF1B070)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMDOM_OFFSET UNITYSDK_OFFSET(0x1DF1B030)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMFILEBATCH_OFFSET UNITYSDK_OFFSET(0x1DF1B0F0)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMFILE_OFFSET UNITYSDK_OFFSET(0x1DF1B0B0)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMSOURCEBATCH_OFFSET UNITYSDK_OFFSET(0x1DF1B170)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMSOURCE_OFFSET UNITYSDK_OFFSET(0x1DF1B130)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_GETRESPONSEFILECMDARGS_OFFSET UNITYSDK_OFFSET(0x1DF1B1B0)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_JOINSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x1DF1B1F0)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMDOMBATCH_OFFSET UNITYSDK_OFFSET(0x1DF1B270)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMDOM_OFFSET UNITYSDK_OFFSET(0x1DF1B230)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMFILEBATCH_OFFSET UNITYSDK_OFFSET(0x1DF1B2F0)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMFILE_OFFSET UNITYSDK_OFFSET(0x1DF1B2B0)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMSOURCEBATCH_OFFSET UNITYSDK_OFFSET(0x1DF1B370)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMSOURCE_OFFSET UNITYSDK_OFFSET(0x1DF1B330)
#define SYSTEM_CODEDOM_COMPILER_CODECOMPILER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1AFF0)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CodeCompiler_TypeDefinitionIndex = 4287;

	class CodeCompiler : public ::System::CodeDom::Compiler::CodeGenerator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER__CTOR_OFFSET))(this);
		}

		::System::CodeDom::Compiler::CompilerResults* FromDom(::System::CodeDom::Compiler::CompilerParameters* options, ::System::CodeDom::CodeCompileUnit* e)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::System::CodeDom::CodeCompileUnit*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMDOM_OFFSET))(this, options, e);
		}

		::System::CodeDom::Compiler::CompilerResults* FromDomBatch(::System::CodeDom::Compiler::CompilerParameters* options, ::Il2CppArray<::System::CodeDom::CodeCompileUnit*>* ea)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::Il2CppArray<::System::CodeDom::CodeCompileUnit*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMDOMBATCH_OFFSET))(this, options, ea);
		}

		::System::CodeDom::Compiler::CompilerResults* FromFile(::System::CodeDom::Compiler::CompilerParameters* options, ::System::String* fileName)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMFILE_OFFSET))(this, options, fileName);
		}

		::System::CodeDom::Compiler::CompilerResults* FromFileBatch(::System::CodeDom::Compiler::CompilerParameters* options, ::Il2CppArray<::System::String*>* fileNames)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMFILEBATCH_OFFSET))(this, options, fileNames);
		}

		::System::CodeDom::Compiler::CompilerResults* FromSource(::System::CodeDom::Compiler::CompilerParameters* options, ::System::String* source)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMSOURCE_OFFSET))(this, options, source);
		}

		::System::CodeDom::Compiler::CompilerResults* FromSourceBatch(::System::CodeDom::Compiler::CompilerParameters* options, ::Il2CppArray<::System::String*>* sources)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_FROMSOURCEBATCH_OFFSET))(this, options, sources);
		}

		::System::String* GetResponseFileCmdArgs(::System::CodeDom::Compiler::CompilerParameters* options, ::System::String* cmdArgs)
		{
			return ((::System::String*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_GETRESPONSEFILECMDARGS_OFFSET))(this, options, cmdArgs);
		}

		static ::System::String* JoinStringArray(::Il2CppArray<::System::String*>* sa, ::System::String* separator)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_JOINSTRINGARRAY_OFFSET))(sa, separator);
		}

		::System::CodeDom::Compiler::CompilerResults* System_CodeDom_Compiler_ICodeCompiler_CompileAssemblyFromDom(::System::CodeDom::Compiler::CompilerParameters* options, ::System::CodeDom::CodeCompileUnit* e)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::System::CodeDom::CodeCompileUnit*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMDOM_OFFSET))(this, options, e);
		}

		::System::CodeDom::Compiler::CompilerResults* System_CodeDom_Compiler_ICodeCompiler_CompileAssemblyFromDomBatch(::System::CodeDom::Compiler::CompilerParameters* options, ::Il2CppArray<::System::CodeDom::CodeCompileUnit*>* ea)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::Il2CppArray<::System::CodeDom::CodeCompileUnit*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMDOMBATCH_OFFSET))(this, options, ea);
		}

		::System::CodeDom::Compiler::CompilerResults* System_CodeDom_Compiler_ICodeCompiler_CompileAssemblyFromFile(::System::CodeDom::Compiler::CompilerParameters* options, ::System::String* fileName)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMFILE_OFFSET))(this, options, fileName);
		}

		::System::CodeDom::Compiler::CompilerResults* System_CodeDom_Compiler_ICodeCompiler_CompileAssemblyFromFileBatch(::System::CodeDom::Compiler::CompilerParameters* options, ::Il2CppArray<::System::String*>* fileNames)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMFILEBATCH_OFFSET))(this, options, fileNames);
		}

		::System::CodeDom::Compiler::CompilerResults* System_CodeDom_Compiler_ICodeCompiler_CompileAssemblyFromSource(::System::CodeDom::Compiler::CompilerParameters* options, ::System::String* source)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMSOURCE_OFFSET))(this, options, source);
		}

		::System::CodeDom::Compiler::CompilerResults* System_CodeDom_Compiler_ICodeCompiler_CompileAssemblyFromSourceBatch(::System::CodeDom::Compiler::CompilerParameters* options, ::Il2CppArray<::System::String*>* sources)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODECOMPILER_SYSTEM_CODEDOM_COMPILER_ICODECOMPILER_COMPILEASSEMBLYFROMSOURCEBATCH_OFFSET))(this, options, sources);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::CodeDom::Compiler { class TempFileCollection; }
namespace System::Collections::Specialized { class StringCollection; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_COMPILEROPTIONS_OFFSET UNITYSDK_OFFSET(0x1E0B0710)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_COREASSEMBLYFILENAME_OFFSET UNITYSDK_OFFSET(0x1E0B0790)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_EMBEDDEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1E0B0810)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_EVIDENCE_OFFSET UNITYSDK_OFFSET(0x1E0B0850)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_GENERATEEXECUTABLE_OFFSET UNITYSDK_OFFSET(0x1E0B08D0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_GENERATEINMEMORY_OFFSET UNITYSDK_OFFSET(0x1E0B0950)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_INCLUDEDEBUGINFORMATION_OFFSET UNITYSDK_OFFSET(0x1E0B09D0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_LINKEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1E0B0A50)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_MAINCLASS_OFFSET UNITYSDK_OFFSET(0x1E0B0A90)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_OUTPUTASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1E0B0B10)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_REFERENCEDASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x1E0B0B90)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_TEMPFILES_OFFSET UNITYSDK_OFFSET(0x1E0B0BD0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_TREATWARNINGSASERRORS_OFFSET UNITYSDK_OFFSET(0x1E0B0C50)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_USERTOKEN_OFFSET UNITYSDK_OFFSET(0x1E0B0CD0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_WARNINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1E0B0D50)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_WIN32RESOURCE_OFFSET UNITYSDK_OFFSET(0x1E0B0DD0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_COMPILEROPTIONS_OFFSET UNITYSDK_OFFSET(0x1E0B0750)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_COREASSEMBLYFILENAME_OFFSET UNITYSDK_OFFSET(0x1E0B07D0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_EVIDENCE_OFFSET UNITYSDK_OFFSET(0x1E0B0890)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_GENERATEEXECUTABLE_OFFSET UNITYSDK_OFFSET(0x1E0B0910)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_GENERATEINMEMORY_OFFSET UNITYSDK_OFFSET(0x1E0B0990)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_INCLUDEDEBUGINFORMATION_OFFSET UNITYSDK_OFFSET(0x1E0B0A10)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_MAINCLASS_OFFSET UNITYSDK_OFFSET(0x1E0B0AD0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_OUTPUTASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1E0B0B50)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_TEMPFILES_OFFSET UNITYSDK_OFFSET(0x1E0B0C10)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_TREATWARNINGSASERRORS_OFFSET UNITYSDK_OFFSET(0x1E0B0C90)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_USERTOKEN_OFFSET UNITYSDK_OFFSET(0x1E0B0D10)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_WARNINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1E0B0D90)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_WIN32RESOURCE_OFFSET UNITYSDK_OFFSET(0x1E0B0E10)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B0650)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E0B0690)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E0B06D0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B0610)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CompilerParameters_TypeDefinitionIndex = 4027;

	class CompilerParameters : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* assemblyNames)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_1_OFFSET))(this, assemblyNames);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::String*>* assemblyNames, ::System::String* outputName)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_2_OFFSET))(this, assemblyNames, outputName);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::String*>* assemblyNames, ::System::String* outputName, ::System::Boolean includeDebugInformation)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS__CTOR_3_OFFSET))(this, assemblyNames, outputName, includeDebugInformation);
		}

		::System::String* get_CompilerOptions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_COMPILEROPTIONS_OFFSET))(this);
		}

		::System::Void set_CompilerOptions(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_COMPILEROPTIONS_OFFSET))(this, value);
		}

		::System::String* get_CoreAssemblyFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_COREASSEMBLYFILENAME_OFFSET))(this);
		}

		::System::Void set_CoreAssemblyFileName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_COREASSEMBLYFILENAME_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringCollection* get_EmbeddedResources()
		{
			return ((::System::Collections::Specialized::StringCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_EMBEDDEDRESOURCES_OFFSET))(this);
		}

		::System::Security::Policy::Evidence* get_Evidence()
		{
			return ((::System::Security::Policy::Evidence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_EVIDENCE_OFFSET))(this);
		}

		::System::Void set_Evidence(::System::Security::Policy::Evidence* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_EVIDENCE_OFFSET))(this, value);
		}

		::System::Boolean get_GenerateExecutable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_GENERATEEXECUTABLE_OFFSET))(this);
		}

		::System::Void set_GenerateExecutable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_GENERATEEXECUTABLE_OFFSET))(this, value);
		}

		::System::Boolean get_GenerateInMemory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_GENERATEINMEMORY_OFFSET))(this);
		}

		::System::Void set_GenerateInMemory(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_GENERATEINMEMORY_OFFSET))(this, value);
		}

		::System::Boolean get_IncludeDebugInformation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_INCLUDEDEBUGINFORMATION_OFFSET))(this);
		}

		::System::Void set_IncludeDebugInformation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_INCLUDEDEBUGINFORMATION_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringCollection* get_LinkedResources()
		{
			return ((::System::Collections::Specialized::StringCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_LINKEDRESOURCES_OFFSET))(this);
		}

		::System::String* get_MainClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_MAINCLASS_OFFSET))(this);
		}

		::System::Void set_MainClass(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_MAINCLASS_OFFSET))(this, value);
		}

		::System::String* get_OutputAssembly()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_OUTPUTASSEMBLY_OFFSET))(this);
		}

		::System::Void set_OutputAssembly(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_OUTPUTASSEMBLY_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringCollection* get_ReferencedAssemblies()
		{
			return ((::System::Collections::Specialized::StringCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_REFERENCEDASSEMBLIES_OFFSET))(this);
		}

		::System::CodeDom::Compiler::TempFileCollection* get_TempFiles()
		{
			return ((::System::CodeDom::Compiler::TempFileCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_TEMPFILES_OFFSET))(this);
		}

		::System::Void set_TempFiles(::System::CodeDom::Compiler::TempFileCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::Compiler::TempFileCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_TEMPFILES_OFFSET))(this, value);
		}

		::System::Boolean get_TreatWarningsAsErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_TREATWARNINGSASERRORS_OFFSET))(this);
		}

		::System::Void set_TreatWarningsAsErrors(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_TREATWARNINGSASERRORS_OFFSET))(this, value);
		}

		::System::IntPtr get_UserToken()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_USERTOKEN_OFFSET))(this);
		}

		::System::Void set_UserToken(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_USERTOKEN_OFFSET))(this, value);
		}

		::System::Int32 get_WarningLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_WARNINGLEVEL_OFFSET))(this);
		}

		::System::Void set_WarningLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_WARNINGLEVEL_OFFSET))(this, value);
		}

		::System::String* get_Win32Resource()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_GET_WIN32RESOURCE_OFFSET))(this);
		}

		::System::Void set_Win32Resource(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERPARAMETERS_SET_WIN32RESOURCE_OFFSET))(this, value);
		}
	};
}

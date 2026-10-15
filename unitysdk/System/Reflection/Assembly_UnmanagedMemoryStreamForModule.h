#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/UnmanagedMemoryStream.h"
namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_ASSEMBLY_UNMANAGEDMEMORYSTREAMFORMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C266E10)
#define SYSTEM_REFLECTION_ASSEMBLY_UNMANAGEDMEMORYSTREAMFORMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C2686B0)

namespace System::Reflection
{
	inline static constexpr unsigned int Assembly_UnmanagedMemoryStreamForModule_TypeDefinitionIndex = 596;

	class Assembly_UnmanagedMemoryStreamForModule : public ::System::IO::UnmanagedMemoryStream
	{
	public:
		::System::Reflection::Module* module; // 0x68
		::System::Void _ctor(::PVOID a1, ::System::Int64 a2, ::System::Reflection::Module* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int64, ::System::Reflection::Module*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_UNMANAGEDMEMORYSTREAMFORMODULE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_UNMANAGEDMEMORYSTREAMFORMODULE_DISPOSE_OFFSET))(this, a1);
		}

	};
}

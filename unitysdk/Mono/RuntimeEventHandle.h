#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define MONO_RUNTIMEEVENTHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define MONO_RUNTIMEEVENTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C14D00)
#define MONO_RUNTIMEEVENTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define MONO_RUNTIMEEVENTHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D30)

namespace Mono
{
	inline static constexpr unsigned int RuntimeEventHandle_TypeDefinitionIndex = 8;

	struct alignas(4) RuntimeEventHandle
	{
		::System::IntPtr value; // 0x10
		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_CTOR_OFFSET))(this, a1);
		}

		::System::IntPtr get_Value()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_GETHASHCODE_OFFSET))(this);
		}

	};
}

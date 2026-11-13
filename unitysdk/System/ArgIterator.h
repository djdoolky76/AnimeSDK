#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeArgumentHandle.h"
#include "unitysdk/System/TypedReference.h"
namespace System { class Object; }

#define SYSTEM_ARGITERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x3F0F460)
#define SYSTEM_ARGITERATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F0F490)
#define SYSTEM_ARGITERATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define SYSTEM_ARGITERATOR_GETNEXTARG_OFFSET UNITYSDK_OFFSET(0x3F0F4F0)
#define SYSTEM_ARGITERATOR_GETREMAININGCOUNT_OFFSET UNITYSDK_OFFSET(0x3F0F580)
#define SYSTEM_ARGITERATOR_INTGETNEXTARG_OFFSET UNITYSDK_OFFSET(0x3F0F570)
#define SYSTEM_ARGITERATOR_SETUP_OFFSET UNITYSDK_OFFSET(0x3F0F450)

namespace System
{
	inline static constexpr unsigned int ArgIterator_TypeDefinitionIndex = 379;

	struct alignas(4) ArgIterator
	{
		::System::IntPtr args; // 0x10
		::System::IntPtr sig; // 0x18
		::System::Int32 num_args; // 0x20
		::System::Int32 next_arg; // 0x24
		::System::Void _ctor(::System::RuntimeArgumentHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeArgumentHandle))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_CTOR_OFFSET))(this, a1);
		}

		::System::Void Setup(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_SETUP_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::TypedReference GetNextArg()
		{
			return ((::System::TypedReference(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_GETNEXTARG_OFFSET))(this);
		}

		::System::TypedReference IntGetNextArg()
		{
			return ((::System::TypedReference(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_INTGETNEXTARG_OFFSET))(this);
		}

		::System::Int32 GetRemainingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_GETREMAININGCOUNT_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MONO_RUNTIMEGPTRARRAYHANDLE_DESTROYANDFREE_OFFSET UNITYSDK_OFFSET(0x1D2AF7D0)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x84ABB0)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x365950)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GPTRARRAYFREE_OFFSET UNITYSDK_OFFSET(0x1D2AF790)
#define MONO_RUNTIMEGPTRARRAYHANDLE_LOOKUP_OFFSET UNITYSDK_OFFSET(0x84ABB0)
#define MONO_RUNTIMEGPTRARRAYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

namespace Mono
{
	inline static constexpr unsigned int RuntimeGPtrArrayHandle_TypeDefinitionIndex = 13;

	struct alignas(8) RuntimeGPtrArrayHandle
	{
		::PVOID value; // 0x10

		::System::Void _ctor(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE__CTOR_OFFSET))(this, ptr);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GET_LENGTH_OFFSET))(this);
		}

		::System::IntPtr get_Item(::System::Int32 i)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GET_ITEM_OFFSET))(this, i);
		}

		::System::IntPtr Lookup(::System::Int32 i)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_LOOKUP_OFFSET))(this, i);
		}

		static ::System::Void GPtrArrayFree(::PVOID value)
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GPTRARRAYFREE_OFFSET))(value);
		}

		/*
		static ::System::Void DestroyAndFree(::Mono::RuntimeGPtrArrayHandle& h)
		{
			return ((::System::Void(*)(::Mono::RuntimeGPtrArrayHandle&))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_DESTROYANDFREE_OFFSET))(h);
		}
		*/
	};
}

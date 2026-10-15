#pragma once
#include "unitysdk/unitysdk.h"

#define MONO_RUNTIMEGPTRARRAYHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define MONO_RUNTIMEGPTRARRAYHANDLE_DESTROYANDFREE_OFFSET UNITYSDK_OFFSET(0x1C06D110)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C14600)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x3C145E0)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GPTRARRAYFREE_OFFSET UNITYSDK_OFFSET(0x1C06D0D0)
#define MONO_RUNTIMEGPTRARRAYHANDLE_LOOKUP_OFFSET UNITYSDK_OFFSET(0x3C14600)

namespace Mono
{
	inline static constexpr unsigned int RuntimeGPtrArrayHandle_TypeDefinitionIndex = 10;

	struct alignas(8) RuntimeGPtrArrayHandle
	{
		::PVOID value; // 0x10
		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GET_LENGTH_OFFSET))(this);
		}

		::System::IntPtr get_Item(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::IntPtr Lookup(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_LOOKUP_OFFSET))(this, a1);
		}

		static ::System::Void GPtrArrayFree(::PVOID a1)
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GPTRARRAYFREE_OFFSET))(a1);
		}

		/*
		static ::System::Void DestroyAndFree(::Mono::RuntimeGPtrArrayHandle a1)
		{
			return ((::System::Void(*)(::Mono::RuntimeGPtrArrayHandle))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_DESTROYANDFREE_OFFSET))(a1);
		}
		*/

	};
}

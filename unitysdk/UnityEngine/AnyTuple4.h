#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnyType.h"
#include "unitysdk/UnityEngine/NativeString.h"
namespace System { class String; }

#define UNITYENGINE_ANYTUPLE4_CTOR_OFFSET UNITYSDK_OFFSET(0x3DADC80)
#define UNITYENGINE_ANYTUPLE4_FORMATTONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F9C0EB0)
#define UNITYENGINE_ANYTUPLE4_FORMATTONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x3F60020)
#define UNITYENGINE_ANYTUPLE4_GETHASHCODEWITHSEED_OFFSET UNITYSDK_OFFSET(0x3F5FF50)
#define UNITYENGINE_ANYTUPLE4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3F5FE60)
#define UNITYENGINE_ANYTUPLE4_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x65AB50)
#define UNITYENGINE_ANYTUPLE4_GET_ITEM1_OFFSET UNITYSDK_OFFSET(0x7EB510)
#define UNITYENGINE_ANYTUPLE4_GET_ITEM2_OFFSET UNITYSDK_OFFSET(0xAEB7B0)
#define UNITYENGINE_ANYTUPLE4_GET_ITEM3_OFFSET UNITYSDK_OFFSET(0x1345760)
#define UNITYENGINE_ANYTUPLE4_GET_ITEM4_OFFSET UNITYSDK_OFFSET(0x7CEE70)
#define UNITYENGINE_ANYTUPLE4_GET_OFFSET UNITYSDK_OFFSET(0x3F5FDD0)
#define UNITYENGINE_ANYTUPLE4_SET_ITEM1_OFFSET UNITYSDK_OFFSET(0x6A7F10)
#define UNITYENGINE_ANYTUPLE4_SET_ITEM2_OFFSET UNITYSDK_OFFSET(0x3E8C120)
#define UNITYENGINE_ANYTUPLE4_SET_ITEM3_OFFSET UNITYSDK_OFFSET(0x1345770)
#define UNITYENGINE_ANYTUPLE4_SET_ITEM4_OFFSET UNITYSDK_OFFSET(0x3E73300)
#define UNITYENGINE_ANYTUPLE4_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F9C0E70)
#define UNITYENGINE_ANYTUPLE4_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x3F5FE50)
#define UNITYENGINE_ANYTUPLE4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F5FE50)

namespace UnityEngine
{
	inline static constexpr unsigned int AnyTuple4_TypeDefinitionIndex = 4297;

	struct alignas(4) AnyTuple4
	{
		::UnityEngine::AnyType _Item1_k__BackingField; // 0x10
		::UnityEngine::AnyType _Item2_k__BackingField; // 0x20
		::UnityEngine::AnyType _Item3_k__BackingField; // 0x30
		::UnityEngine::AnyType _Item4_k__BackingField; // 0x40
		::System::Void _ctor(::UnityEngine::AnyType a1, ::UnityEngine::AnyType a2, ::UnityEngine::AnyType a3, ::UnityEngine::AnyType a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::AnyType Get(::System::Int32 a1)
		{
			return ((::UnityEngine::AnyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeWithSeed(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GETHASHCODEWITHSEED_OFFSET))(this, a1);
		}

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_TOSTRINGINTERNAL_OFFSET))(this);
		}

		::UnityEngine::NativeString FormatToNativeString(::System::Boolean a1)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_FORMATTONATIVESTRING_OFFSET))(this, a1);
		}

		::UnityEngine::AnyType get_Item1()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_ITEM1_OFFSET))(this);
		}

		::System::Void set_Item1(::UnityEngine::AnyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_SET_ITEM1_OFFSET))(this, a1);
		}

		::UnityEngine::AnyType get_Item2()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_ITEM2_OFFSET))(this);
		}

		::System::Void set_Item2(::UnityEngine::AnyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_SET_ITEM2_OFFSET))(this, a1);
		}

		::UnityEngine::AnyType get_Item3()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_ITEM3_OFFSET))(this);
		}

		::System::Void set_Item3(::UnityEngine::AnyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_SET_ITEM3_OFFSET))(this, a1);
		}

		::UnityEngine::AnyType get_Item4()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_ITEM4_OFFSET))(this);
		}

		::System::Void set_Item4(::UnityEngine::AnyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_SET_ITEM4_OFFSET))(this, a1);
		}

		/*
		static ::System::String* ToStringInternal_Injected(::UnityEngine::AnyTuple4 a1)
		{
			return ((::System::String*(*)(::UnityEngine::AnyTuple4))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_TOSTRINGINTERNAL_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void FormatToNativeString_Injected(::UnityEngine::AnyTuple4 a1, ::System::Boolean a2, ::UnityEngine::NativeString a3)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple4, ::System::Boolean, ::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_FORMATTONATIVESTRING_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

	};
}

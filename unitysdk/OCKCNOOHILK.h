#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define OCKCNOOHILK_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define OCKCNOOHILK_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xC673CE0)
#define OCKCNOOHILK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x28D00)
#define OCKCNOOHILK_EQUALS_OFFSET UNITYSDK_OFFSET(0x28CB0)
#define OCKCNOOHILK_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xC673C60)
#define OCKCNOOHILK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x28D10)
#define OCKCNOOHILK_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xE600)
#define OCKCNOOHILK_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x28C60)
#define OCKCNOOHILK_OIGHJDMLNMM_OFFSET UNITYSDK_OFFSET(0xC673A80)
#define OCKCNOOHILK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x28D60)

inline static constexpr unsigned int OCKCNOOHILK_TypeDefinitionIndex = 77096;

	struct alignas(4) OCKCNOOHILK
	{
		::System::UInt32 _Value_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCKCNOOHILK_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCNOOHILK_GET_VALUE_OFFSET))(this);
		}

		/*
		static ::OCKCNOOHILK OIGHJDMLNMM()
		{
			return ((::OCKCNOOHILK(*)())((::PBYTE)hIl2Cpp + OCKCNOOHILK_OIGHJDMLNMM_OFFSET))();
		}
		*/

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCNOOHILK_LDAMHBBILAD_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::OCKCNOOHILK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + OCKCNOOHILK_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCKCNOOHILK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCNOOHILK_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::OCKCNOOHILK a1, ::OCKCNOOHILK a2)
		{
			return ((::System::Boolean(*)(::OCKCNOOHILK, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + OCKCNOOHILK_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::OCKCNOOHILK a1, ::OCKCNOOHILK a2)
		{
			return ((::System::Boolean(*)(::OCKCNOOHILK, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + OCKCNOOHILK_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCNOOHILK_TOSTRING_OFFSET))(this);
		}

	};

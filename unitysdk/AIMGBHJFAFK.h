#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define AIMGBHJFAFK_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define AIMGBHJFAFK_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x19D28E50)
#define AIMGBHJFAFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E4E3E0)
#define AIMGBHJFAFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E4E390)
#define AIMGBHJFAFK_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x19D28DD0)
#define AIMGBHJFAFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E4E3F0)
#define AIMGBHJFAFK_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define AIMGBHJFAFK_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3E4E340)
#define AIMGBHJFAFK_OIGHJDMLNMM_OFFSET UNITYSDK_OFFSET(0x19D28BF0)
#define AIMGBHJFAFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E4E440)

inline static constexpr unsigned int AIMGBHJFAFK_TypeDefinitionIndex = 77092;

	struct alignas(4) AIMGBHJFAFK
	{
		::System::UInt32 _Value_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIMGBHJFAFK_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMGBHJFAFK_GET_VALUE_OFFSET))(this);
		}

		/*
		static ::AIMGBHJFAFK OIGHJDMLNMM()
		{
			return ((::AIMGBHJFAFK(*)())((::PBYTE)hIl2Cpp + AIMGBHJFAFK_OIGHJDMLNMM_OFFSET))();
		}
		*/

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMGBHJFAFK_LDAMHBBILAD_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::AIMGBHJFAFK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIMGBHJFAFK))((::PBYTE)hIl2Cpp + AIMGBHJFAFK_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIMGBHJFAFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMGBHJFAFK_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::AIMGBHJFAFK a1, ::AIMGBHJFAFK a2)
		{
			return ((::System::Boolean(*)(::AIMGBHJFAFK, ::AIMGBHJFAFK))((::PBYTE)hIl2Cpp + AIMGBHJFAFK_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::AIMGBHJFAFK a1, ::AIMGBHJFAFK a2)
		{
			return ((::System::Boolean(*)(::AIMGBHJFAFK, ::AIMGBHJFAFK))((::PBYTE)hIl2Cpp + AIMGBHJFAFK_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMGBHJFAFK_TOSTRING_OFFSET))(this);
		}

	};

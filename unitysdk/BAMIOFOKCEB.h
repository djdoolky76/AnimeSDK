#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define BAMIOFOKCEB_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define BAMIOFOKCEB_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x199BF2D0)
#define BAMIOFOKCEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E401A0)
#define BAMIOFOKCEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E40150)
#define BAMIOFOKCEB_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x199BF480)
#define BAMIOFOKCEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E401B0)
#define BAMIOFOKCEB_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define BAMIOFOKCEB_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3E40100)
#define BAMIOFOKCEB_OIGHJDMLNMM_OFFSET UNITYSDK_OFFSET(0x199DF700)
#define BAMIOFOKCEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E40200)

inline static constexpr unsigned int BAMIOFOKCEB_TypeDefinitionIndex = 77088;

	struct alignas(4) BAMIOFOKCEB
	{
		::System::UInt32 _Value_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAMIOFOKCEB_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIOFOKCEB_GET_VALUE_OFFSET))(this);
		}

		/*
		static ::BAMIOFOKCEB OIGHJDMLNMM()
		{
			return ((::BAMIOFOKCEB(*)())((::PBYTE)hIl2Cpp + BAMIOFOKCEB_OIGHJDMLNMM_OFFSET))();
		}
		*/

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIOFOKCEB_LDAMHBBILAD_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::BAMIOFOKCEB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + BAMIOFOKCEB_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAMIOFOKCEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIOFOKCEB_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::BAMIOFOKCEB a1, ::BAMIOFOKCEB a2)
		{
			return ((::System::Boolean(*)(::BAMIOFOKCEB, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + BAMIOFOKCEB_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::BAMIOFOKCEB a1, ::BAMIOFOKCEB a2)
		{
			return ((::System::Boolean(*)(::BAMIOFOKCEB, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + BAMIOFOKCEB_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIOFOKCEB_TOSTRING_OFFSET))(this);
		}

	};

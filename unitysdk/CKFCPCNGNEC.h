#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define CKFCPCNGNEC_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define CKFCPCNGNEC_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1AD3B210)
#define CKFCPCNGNEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E6E050)
#define CKFCPCNGNEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E6E000)
#define CKFCPCNGNEC_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1AD3B190)
#define CKFCPCNGNEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E6E060)
#define CKFCPCNGNEC_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define CKFCPCNGNEC_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3E6DFB0)
#define CKFCPCNGNEC_OIGHJDMLNMM_OFFSET UNITYSDK_OFFSET(0x1AD3AFB0)
#define CKFCPCNGNEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E6E0B0)

inline static constexpr unsigned int CKFCPCNGNEC_TypeDefinitionIndex = 77093;

	struct alignas(4) CKFCPCNGNEC
	{
		::System::UInt32 _Value_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKFCPCNGNEC_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFCPCNGNEC_GET_VALUE_OFFSET))(this);
		}

		/*
		static ::CKFCPCNGNEC OIGHJDMLNMM()
		{
			return ((::CKFCPCNGNEC(*)())((::PBYTE)hIl2Cpp + CKFCPCNGNEC_OIGHJDMLNMM_OFFSET))();
		}
		*/

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFCPCNGNEC_LDAMHBBILAD_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::CKFCPCNGNEC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKFCPCNGNEC))((::PBYTE)hIl2Cpp + CKFCPCNGNEC_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKFCPCNGNEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFCPCNGNEC_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::CKFCPCNGNEC a1, ::CKFCPCNGNEC a2)
		{
			return ((::System::Boolean(*)(::CKFCPCNGNEC, ::CKFCPCNGNEC))((::PBYTE)hIl2Cpp + CKFCPCNGNEC_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::CKFCPCNGNEC a1, ::CKFCPCNGNEC a2)
		{
			return ((::System::Boolean(*)(::CKFCPCNGNEC, ::CKFCPCNGNEC))((::PBYTE)hIl2Cpp + CKFCPCNGNEC_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFCPCNGNEC_TOSTRING_OFFSET))(this);
		}

	};

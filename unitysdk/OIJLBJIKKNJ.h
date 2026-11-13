#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define OIJLBJIKKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define OIJLBJIKKNJ_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1949BCD0)
#define OIJLBJIKKNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E39240)
#define OIJLBJIKKNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E391F0)
#define OIJLBJIKKNJ_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1949BC50)
#define OIJLBJIKKNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E39250)
#define OIJLBJIKKNJ_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define OIJLBJIKKNJ_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3E391A0)
#define OIJLBJIKKNJ_OIGHJDMLNMM_OFFSET UNITYSDK_OFFSET(0x1949BA70)
#define OIJLBJIKKNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E392A0)

inline static constexpr unsigned int OIJLBJIKKNJ_TypeDefinitionIndex = 77094;

	struct alignas(4) OIJLBJIKKNJ
	{
		::System::UInt32 _Value_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIJLBJIKKNJ_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJLBJIKKNJ_GET_VALUE_OFFSET))(this);
		}

		/*
		static ::OIJLBJIKKNJ OIGHJDMLNMM()
		{
			return ((::OIJLBJIKKNJ(*)())((::PBYTE)hIl2Cpp + OIJLBJIKKNJ_OIGHJDMLNMM_OFFSET))();
		}
		*/

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJLBJIKKNJ_LDAMHBBILAD_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::OIJLBJIKKNJ a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIJLBJIKKNJ))((::PBYTE)hIl2Cpp + OIJLBJIKKNJ_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIJLBJIKKNJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJLBJIKKNJ_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::OIJLBJIKKNJ a1, ::OIJLBJIKKNJ a2)
		{
			return ((::System::Boolean(*)(::OIJLBJIKKNJ, ::OIJLBJIKKNJ))((::PBYTE)hIl2Cpp + OIJLBJIKKNJ_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::OIJLBJIKKNJ a1, ::OIJLBJIKKNJ a2)
		{
			return ((::System::Boolean(*)(::OIJLBJIKKNJ, ::OIJLBJIKKNJ))((::PBYTE)hIl2Cpp + OIJLBJIKKNJ_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJLBJIKKNJ_TOSTRING_OFFSET))(this);
		}

	};

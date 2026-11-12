#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define OIJLBJIKKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define OIJLBJIKKNJ_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xC795CF0)
#define OIJLBJIKKNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2AFA0)
#define OIJLBJIKKNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x2AF50)
#define OIJLBJIKKNJ_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xC795C70)
#define OIJLBJIKKNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2AFB0)
#define OIJLBJIKKNJ_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xE600)
#define OIJLBJIKKNJ_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x2AF00)
#define OIJLBJIKKNJ_OIGHJDMLNMM_OFFSET UNITYSDK_OFFSET(0xC795A90)
#define OIJLBJIKKNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2B000)

inline static constexpr unsigned int OIJLBJIKKNJ_TypeDefinitionIndex = 77095;

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

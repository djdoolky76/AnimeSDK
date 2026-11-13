#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define OOFGNEDEFCF_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define OOFGNEDEFCF_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1969BEC0)
#define OOFGNEDEFCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E39EB0)
#define OOFGNEDEFCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E39E60)
#define OOFGNEDEFCF_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1969BE40)
#define OOFGNEDEFCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E39EC0)
#define OOFGNEDEFCF_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define OOFGNEDEFCF_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3E39E10)
#define OOFGNEDEFCF_OIGHJDMLNMM_OFFSET UNITYSDK_OFFSET(0x1969BC60)
#define OOFGNEDEFCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E39F10)

inline static constexpr unsigned int OOFGNEDEFCF_TypeDefinitionIndex = 77096;

	struct alignas(4) OOFGNEDEFCF
	{
		::System::UInt32 _Value_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOFGNEDEFCF_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFGNEDEFCF_GET_VALUE_OFFSET))(this);
		}

		/*
		static ::OOFGNEDEFCF OIGHJDMLNMM()
		{
			return ((::OOFGNEDEFCF(*)())((::PBYTE)hIl2Cpp + OOFGNEDEFCF_OIGHJDMLNMM_OFFSET))();
		}
		*/

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFGNEDEFCF_LDAMHBBILAD_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::OOFGNEDEFCF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOFGNEDEFCF))((::PBYTE)hIl2Cpp + OOFGNEDEFCF_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOFGNEDEFCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFGNEDEFCF_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::OOFGNEDEFCF a1, ::OOFGNEDEFCF a2)
		{
			return ((::System::Boolean(*)(::OOFGNEDEFCF, ::OOFGNEDEFCF))((::PBYTE)hIl2Cpp + OOFGNEDEFCF_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::OOFGNEDEFCF a1, ::OOFGNEDEFCF a2)
		{
			return ((::System::Boolean(*)(::OOFGNEDEFCF, ::OOFGNEDEFCF))((::PBYTE)hIl2Cpp + OOFGNEDEFCF_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFGNEDEFCF_TOSTRING_OFFSET))(this);
		}

	};

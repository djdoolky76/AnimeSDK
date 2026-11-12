#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define EHKGGCKICFI_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define EHKGGCKICFI_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x163AD020)
#define EHKGGCKICFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3047860)
#define EHKGGCKICFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x3047810)
#define EHKGGCKICFI_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x163ACFA0)
#define EHKGGCKICFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3047870)
#define EHKGGCKICFI_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xE600)
#define EHKGGCKICFI_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x30477C0)
#define EHKGGCKICFI_OIGHJDMLNMM_OFFSET UNITYSDK_OFFSET(0x163ACDC0)
#define EHKGGCKICFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x30478C0)

inline static constexpr unsigned int EHKGGCKICFI_TypeDefinitionIndex = 77092;

	struct alignas(4) EHKGGCKICFI
	{
		::System::UInt32 _Value_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHKGGCKICFI_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKGGCKICFI_GET_VALUE_OFFSET))(this);
		}

		/*
		static ::EHKGGCKICFI OIGHJDMLNMM()
		{
			return ((::EHKGGCKICFI(*)())((::PBYTE)hIl2Cpp + EHKGGCKICFI_OIGHJDMLNMM_OFFSET))();
		}
		*/

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKGGCKICFI_LDAMHBBILAD_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::EHKGGCKICFI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHKGGCKICFI))((::PBYTE)hIl2Cpp + EHKGGCKICFI_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHKGGCKICFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKGGCKICFI_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::EHKGGCKICFI a1, ::EHKGGCKICFI a2)
		{
			return ((::System::Boolean(*)(::EHKGGCKICFI, ::EHKGGCKICFI))((::PBYTE)hIl2Cpp + EHKGGCKICFI_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::EHKGGCKICFI a1, ::EHKGGCKICFI a2)
		{
			return ((::System::Boolean(*)(::EHKGGCKICFI, ::EHKGGCKICFI))((::PBYTE)hIl2Cpp + EHKGGCKICFI_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKGGCKICFI_TOSTRING_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define AKCLHMNONOD_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define AKCLHMNONOD_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x12DB2E40)
#define AKCLHMNONOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DC4BD0)
#define AKCLHMNONOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DC4B80)
#define AKCLHMNONOD_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x12DB2DF0)
#define AKCLHMNONOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DC4BE0)
#define AKCLHMNONOD_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xE600)
#define AKCLHMNONOD_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1DC4B30)
#define AKCLHMNONOD_OIGHJDMLNMM_OFFSET UNITYSDK_OFFSET(0x12DB2C10)
#define AKCLHMNONOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC4C30)

inline static constexpr unsigned int AKCLHMNONOD_TypeDefinitionIndex = 77091;

	struct alignas(4) AKCLHMNONOD
	{
		::System::UInt32 _Value_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCLHMNONOD_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCLHMNONOD_GET_VALUE_OFFSET))(this);
		}

		/*
		static ::AKCLHMNONOD OIGHJDMLNMM()
		{
			return ((::AKCLHMNONOD(*)())((::PBYTE)hIl2Cpp + AKCLHMNONOD_OIGHJDMLNMM_OFFSET))();
		}
		*/

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCLHMNONOD_LDAMHBBILAD_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::AKCLHMNONOD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKCLHMNONOD))((::PBYTE)hIl2Cpp + AKCLHMNONOD_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKCLHMNONOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCLHMNONOD_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::AKCLHMNONOD a1, ::AKCLHMNONOD a2)
		{
			return ((::System::Boolean(*)(::AKCLHMNONOD, ::AKCLHMNONOD))((::PBYTE)hIl2Cpp + AKCLHMNONOD_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::AKCLHMNONOD a1, ::AKCLHMNONOD a2)
		{
			return ((::System::Boolean(*)(::AKCLHMNONOD, ::AKCLHMNONOD))((::PBYTE)hIl2Cpp + AKCLHMNONOD_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCLHMNONOD_TOSTRING_OFFSET))(this);
		}

	};

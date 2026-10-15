#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define BNFNLAHMAND_CTOR_1_OFFSET UNITYSDK_OFFSET(0xAF40)
#define BNFNLAHMAND_CTOR_2_OFFSET UNITYSDK_OFFSET(0x2F9E7F0)
#define BNFNLAHMAND_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2A280)
#define BNFNLAHMAND_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C59A0E0)
#define BNFNLAHMAND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C2A3C0)
#define BNFNLAHMAND_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C2A350)
#define BNFNLAHMAND_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C59A010)
#define BNFNLAHMAND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C2A300)
#define BNFNLAHMAND_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x3C2A2B0)
#define BNFNLAHMAND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C2A360)

inline static constexpr unsigned int BNFNLAHMAND_TypeDefinitionIndex = 36894;

	struct alignas(4) BNFNLAHMAND
	{
		::System::UInt32 MJMEEOIEMMM; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BNFNLAHMAND_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNFNLAHMAND_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFNLAHMAND_CTOR_2_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFNLAHMAND_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFNLAHMAND_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::BNFNLAHMAND a1, ::BNFNLAHMAND a2)
		{
			return ((::System::Boolean(*)(::BNFNLAHMAND, ::BNFNLAHMAND))((::PBYTE)hIl2Cpp + BNFNLAHMAND_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::BNFNLAHMAND a1, ::BNFNLAHMAND a2)
		{
			return ((::System::Boolean(*)(::BNFNLAHMAND, ::BNFNLAHMAND))((::PBYTE)hIl2Cpp + BNFNLAHMAND_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNFNLAHMAND_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFNLAHMAND_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals_1(::BNFNLAHMAND a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNFNLAHMAND))((::PBYTE)hIl2Cpp + BNFNLAHMAND_EQUALS_1_OFFSET))(this, a1);
		}
		*/

	};

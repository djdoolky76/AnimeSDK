#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define BOONHOMEKHD_CTOR_OFFSET UNITYSDK_OFFSET(0xFE60)
#define BOONHOMEKHD_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C8DB9B0)
#define BOONHOMEKHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C2F870)
#define BOONHOMEKHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C2F800)
#define BOONHOMEKHD_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C8DB8F0)
#define BOONHOMEKHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C2F880)

inline static constexpr unsigned int BOONHOMEKHD_TypeDefinitionIndex = 43248;

	struct alignas(4) BOONHOMEKHD
	{
		::System::Int32 GAOAMKBNDPN; // 0x10
		::System::Int32 EBJKJAGJGPK; // 0x14
		::System::Int32 KIBPKPGDECO; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BOONHOMEKHD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		/*
		::System::Boolean Equals(::BOONHOMEKHD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOONHOMEKHD))((::PBYTE)hIl2Cpp + BOONHOMEKHD_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOONHOMEKHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOONHOMEKHD_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::BOONHOMEKHD a1, ::BOONHOMEKHD a2)
		{
			return ((::System::Boolean(*)(::BOONHOMEKHD, ::BOONHOMEKHD))((::PBYTE)hIl2Cpp + BOONHOMEKHD_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::BOONHOMEKHD a1, ::BOONHOMEKHD a2)
		{
			return ((::System::Boolean(*)(::BOONHOMEKHD, ::BOONHOMEKHD))((::PBYTE)hIl2Cpp + BOONHOMEKHD_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};

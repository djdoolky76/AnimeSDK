#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleTeamType.h"
namespace System { class Object; }

#define ICCEHNCMJAN_CTOR_OFFSET UNITYSDK_OFFSET(0x3DB04F0)
#define ICCEHNCMJAN_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x188C9F80)
#define ICCEHNCMJAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E075B0)
#define ICCEHNCMJAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E07540)
#define ICCEHNCMJAN_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x188C9EC0)
#define ICCEHNCMJAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E07530)

inline static constexpr unsigned int ICCEHNCMJAN_TypeDefinitionIndex = 65296;

	struct alignas(4) ICCEHNCMJAN
	{
		::System::UInt32 AHNBPKAGAIL; // 0x10
		::System::UInt32 HHFINENIGFL; // 0x14
		::RPG::Client::ExpeditionBattleTeamType GMPGDEINODK; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::ExpeditionBattleTeamType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::ExpeditionBattleTeamType))((::PBYTE)hIl2Cpp + ICCEHNCMJAN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEHNCMJAN_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::ICCEHNCMJAN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICCEHNCMJAN))((::PBYTE)hIl2Cpp + ICCEHNCMJAN_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICCEHNCMJAN_EQUALS_1_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::ICCEHNCMJAN a1, ::ICCEHNCMJAN a2)
		{
			return ((::System::Boolean(*)(::ICCEHNCMJAN, ::ICCEHNCMJAN))((::PBYTE)hIl2Cpp + ICCEHNCMJAN_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::ICCEHNCMJAN a1, ::ICCEHNCMJAN a2)
		{
			return ((::System::Boolean(*)(::ICCEHNCMJAN, ::ICCEHNCMJAN))((::PBYTE)hIl2Cpp + ICCEHNCMJAN_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};

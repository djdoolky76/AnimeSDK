#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICCEHNCMJAN.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CIICMHFLBNF_CTOR_OFFSET UNITYSDK_OFFSET(0xD8E9550)
#define CIICMHFLBNF_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0xD8E9310)
#define CIICMHFLBNF_GKKDODPDBLA_OFFSET UNITYSDK_OFFSET(0xD8E9320)

inline static constexpr unsigned int CIICMHFLBNF_TypeDefinitionIndex = 65372;

	class CIICMHFLBNF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::ICCEHNCMJAN, ::RPG::Client::ExpeditionBattleTeam*>* _Teams_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICMHFLBNF_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::ICCEHNCMJAN, ::RPG::Client::ExpeditionBattleTeam*>* get_Teams()
		{
			return ((::System::Collections::Generic::Dictionary_2<::ICCEHNCMJAN, ::RPG::Client::ExpeditionBattleTeam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICMHFLBNF_GET_TEAMS_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleTeam* GKKDODPDBLA(::ICCEHNCMJAN a1)
		{
			return ((::RPG::Client::ExpeditionBattleTeam*(*)(::PVOID, ::ICCEHNCMJAN))((::PBYTE)hIl2Cpp + CIICMHFLBNF_GKKDODPDBLA_OFFSET))(this, a1);
		}

	};

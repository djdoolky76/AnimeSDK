#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRogueTournPermanantTalentState; }

#define RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E0A60)
#define RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6E0A70)
#define RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6E0A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueTournPermanantTalentState_TypeDefinitionIndex = 21577;

	class ByCompareRogueTournPermanantTalentState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

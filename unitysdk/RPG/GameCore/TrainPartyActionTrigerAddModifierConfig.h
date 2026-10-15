#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionTrigerAddModifierConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFFAE0)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBFFAF0)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFFC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionTrigerAddModifierConfig_TypeDefinitionIndex = 18080;

	class TrainPartyActionTrigerAddModifierConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

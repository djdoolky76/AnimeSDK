#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelValueSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelExtremeValueSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A0E90)
#define RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A0EA0)
#define RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A0E30)

namespace RPG::GameCore
{
	class ChimeraDuelExtremeValueSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelValueSelectorType ValueSelectorType; // 0x10
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x14
		::System::Boolean IsLowest; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelExtremeValueSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelExtremeValueSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelExtremeValueSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelExtremeValueSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEXTREMEVALUESELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelValueSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelMiddleValueSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5410)
#define RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A5420)
#define RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A53C0)

namespace RPG::GameCore
{
	class ChimeraDuelMiddleValueSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelValueSelectorType ValueSelectorType; // 0x10
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelMiddleValueSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelMiddleValueSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelMiddleValueSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelMiddleValueSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

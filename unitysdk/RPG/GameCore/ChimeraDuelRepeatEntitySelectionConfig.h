#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelSaveEntitySelectionConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelRepeatEntitySelectionConfig; }

#define RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9310)
#define RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A9320)
#define RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A92C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRepeatEntitySelectionConfig_TypeDefinitionIndex = 15901;

	class ChimeraDuelRepeatEntitySelectionConfig : public ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelValueGetter* RepeatTimesValueGetter; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Selector; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRepeatEntitySelectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRepeatEntitySelectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRepeatEntitySelectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRepeatEntitySelectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

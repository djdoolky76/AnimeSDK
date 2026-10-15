#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyDiceSurfaceWeightByRarityConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA17C00)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA17C10)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyDiceSurfaceWeightByRarityConfig_TypeDefinitionIndex = 17937;

	class RogueModifierModifyDiceSurfaceWeightByRarityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyDiceSurfaceWeightByRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyDiceSurfaceWeightByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyDiceSurfaceWeightByRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyDiceSurfaceWeightByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

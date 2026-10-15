#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19040)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19050)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig_TypeDefinitionIndex = 17883;

	class RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionAfterStyleGiftSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA157E0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA157F0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA157A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterStyleGiftSelectConfig_TypeDefinitionIndex = 17872;

	class RogueModifierExecuteActionAfterStyleGiftSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

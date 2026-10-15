#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionAfterTitanBlessInteractConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E7FA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E7FB0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E7F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterTitanBlessInteractConfig_TypeDefinitionIndex = 17791;

	class RogueModifierExecuteActionAfterTitanBlessInteractConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterTitanBlessInteractConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterTitanBlessInteractConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterTitanBlessInteractConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterTitanBlessInteractConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

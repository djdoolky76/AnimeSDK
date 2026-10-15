#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16560)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16570)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig_TypeDefinitionIndex = 17871;

	class RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

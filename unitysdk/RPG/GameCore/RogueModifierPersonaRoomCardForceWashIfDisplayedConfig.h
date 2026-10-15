#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaRoomCardForceWashIfDisplayedConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EBDA0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EBDB0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EBD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceWashIfDisplayedConfig_TypeDefinitionIndex = 17815;

	class RogueModifierPersonaRoomCardForceWashIfDisplayedConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfDisplayedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfDisplayedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfDisplayedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceWashIfDisplayedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEWASHIFDISPLAYEDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

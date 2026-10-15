#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaRoomCardForceDrawConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EBCE0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EBCF0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EBCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceDrawConfig_TypeDefinitionIndex = 17811;

	class RogueModifierPersonaRoomCardForceDrawConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

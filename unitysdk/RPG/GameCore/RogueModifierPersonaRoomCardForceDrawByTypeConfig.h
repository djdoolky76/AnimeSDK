#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaRoomCardForceDrawByTypeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19520)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19530)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA194E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceDrawByTypeConfig_TypeDefinitionIndex = 17812;

	class RogueModifierPersonaRoomCardForceDrawByTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawByTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawByTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawByTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawByTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWBYTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

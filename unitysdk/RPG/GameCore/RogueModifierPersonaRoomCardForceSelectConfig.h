#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaRoomCardForceSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA195E0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA195F0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA195A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceSelectConfig_TypeDefinitionIndex = 17814;

	class RogueModifierPersonaRoomCardForceSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCESELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

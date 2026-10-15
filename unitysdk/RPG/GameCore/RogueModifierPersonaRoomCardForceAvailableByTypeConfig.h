#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaRoomCardForceAvailableByTypeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19460)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19470)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceAvailableByTypeConfig_TypeDefinitionIndex = 17813;

	class RogueModifierPersonaRoomCardForceAvailableByTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableByTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableByTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableByTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableByTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEBYTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

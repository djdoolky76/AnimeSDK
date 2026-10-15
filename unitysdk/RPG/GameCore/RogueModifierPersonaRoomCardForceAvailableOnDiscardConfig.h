#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA194C0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA194D0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig_TypeDefinitionIndex = 17810;

	class RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceAvailableOnDiscardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEAVAILABLEONDISCARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

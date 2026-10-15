#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaGetCoinOnRoomCardRemoveConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19220)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19230)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA191E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaGetCoinOnRoomCardRemoveConfig_TypeDefinitionIndex = 17866;

	class RogueModifierPersonaGetCoinOnRoomCardRemoveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPlayerStateListenerConfig; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D2850)
#define RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D2860)
#define RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D2820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerStateListenerConfig_TypeDefinitionIndex = 18610;

	class FiveDimPlayerStateListenerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPlayerStateListener; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameEvent* OnPlayerJump; // 0x18
		::RPG::GameCore::LittleGameEvent* OnPlayerLand; // 0x20
		::RPG::GameCore::LittleGameEvent* OnPlayerUseSkill; // 0x28
		::RPG::GameCore::LittleGameEvent* OnPlayerPlayFlute; // 0x30
		::RPG::GameCore::LittleGameEvent* OnPlayerBeatBack; // 0x38
		::RPG::GameCore::LittleGameEvent* OnPlayerDead; // 0x40
		::RPG::GameCore::LittleGameEvent* OnInputUpPress; // 0x48
		::RPG::GameCore::LittleGameEvent* OnInputUpRelease; // 0x50
		::RPG::GameCore::LittleGameEvent* OnInputDownPress; // 0x58
		::RPG::GameCore::LittleGameEvent* OnInputDownRelease; // 0x60
		::RPG::GameCore::LittleGameEvent* OnInputLeftPress; // 0x68
		::RPG::GameCore::LittleGameEvent* OnInputLeftRelease; // 0x70
		::RPG::GameCore::LittleGameEvent* OnInputRightPress; // 0x78
		::RPG::GameCore::LittleGameEvent* OnInputRightRelease; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerStateListenerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerStateListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerStateListenerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerStateListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSTATELISTENERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

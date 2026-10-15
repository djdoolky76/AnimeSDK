#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimContactEventEmitterConfig; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B5EF0)
#define RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B5F00)
#define RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B5EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimContactEventEmitterConfig_TypeDefinitionIndex = 18640;

	class FiveDimContactEventEmitterConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsContactEventEmitter; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameEvent* OnPlayerStand; // 0x18
		::RPG::GameCore::LittleGameEvent* OnPlayerExitStand; // 0x20
		::RPG::GameCore::LittleGameEvent* OnPlayerClimb; // 0x28
		::RPG::GameCore::LittleGameEvent* OnPlayerExitClimb; // 0x30
		::RPG::GameCore::LittleGameEvent* OnPlayerSlide; // 0x38
		::RPG::GameCore::LittleGameEvent* OnPlayerExitSlide; // 0x40
		::RPG::GameCore::LittleGameEvent* OnPlayerLanding; // 0x48
		::RPG::GameCore::LittleGameEvent* OnPlayerJump; // 0x50
		::RPG::GameCore::LittleGameEvent* OnPlayerJumpFromBelow; // 0x58
		::RPG::GameCore::LittleGameEvent* OnPlayerTrampolineJumpFromBelow; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimContactEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimContactEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimContactEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimContactEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONTACTEVENTEMITTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

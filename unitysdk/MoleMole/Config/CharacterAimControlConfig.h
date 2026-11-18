#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GamepadInputModifier.h"
#include "unitysdk/MoleMole/Config/MouseInputModifier.h"
#include "unitysdk/MoleMole/Config/TouchInputModifier.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ICharacterAssistAimConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CHARACTERAIMCONTROLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA24110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimControlConfig_TypeDefinitionIndex = 90995;

	class CharacterAimControlConfig : public ::System::Object
	{
	public:
		::System::Boolean useLeftAxisInput; // 0x10
		::System::Boolean LeftAxisInputInstant; // 0x11
		::System::Byte _padding0[0x2];
		::MoleMole::Config::MouseInputModifier mouse; // 0x14
		::MoleMole::Config::TouchInputModifier touch; // 0x20
		::System::Byte _padding1[0x4];
		::MoleMole::Config::GamepadInputModifier gamepad; // 0x30
		::System::Boolean ForbiddenCharacterRotation; // 0x50
		::System::Boolean MuteSteerInput; // 0x51
		::System::Boolean ControlInputIgnoreTimeScale; // 0x52
		::System::Boolean MuteMoveWhenLeftAxisControlCamera; // 0x53
		::System::Boolean EnableYawAngleLimitByCharacterForward; // 0x54
		::System::Byte _padding2[0x3];
		::System::Single YawAngleLimitThresholdByCharacterForward; // 0x58
		::System::Boolean EnableYawAngleLimitByCharacterForwardDiffRange; // 0x5C
		::System::Byte _padding3[0x3];
		::System::Single YawAngleLimitThresholdByCharacterForwardLeft; // 0x60
		::System::Single YawAngleLimitThresholdByCharacterForwardRight; // 0x64
		::System::String* lockTargetID; // 0x68
		::System::Single lockTargetProtectionTime; // 0x70
		::System::Single lockTargetBreakInputThreshold; // 0x74
		::System::Boolean enableLockTargetActivationRange; // 0x78
		::System::Byte _padding4[0x3];
		::System::Single lockTargetActivationRange; // 0x7C
		::MoleMole::Config::ICharacterAssistAimConfig* assistConfig; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAIMCONTROLCONFIG__CTOR_OFFSET))(this);
		}
	};
}

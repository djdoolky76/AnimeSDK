#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCONTROLLABLEOBJECTCOMMONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xFABCF10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigControllableObjectCommonParam_TypeDefinitionIndex = 91553;

	class ConfigControllableObjectCommonParam : public ::System::Object
	{
	public:
		::MoleMole::Config::CharacterAimModeConfig* AimCameraConfig; // 0x10
		::System::String* overrideBackToAvatarBlackCurveKey; // 0x18
		::System::String* screenEffectName; // 0x20
		::System::String* backToAvatarScreenEffectName; // 0x28
		::MoleMole::Config::ScreenEffectType screenEffectType; // 0x30
		::UnityEngine::Vector3 initAimTargetOffset; // 0x34
		::System::Single cutDurration; // 0x40
		::System::Single overrideSwitchCameraDuration; // 0x44
		::MoleMole::Config::ScreenEffectType backToAvatarScreenEffectType; // 0x48
		::System::Single overrideBackToAvatarSwitchCameraDuration; // 0x4C
		::System::Boolean setInitAimTarget; // 0x50
		::System::Boolean isCutReturn; // 0x51
		::System::Boolean disableOverShoulderCamera; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCONTROLLABLEOBJECTCOMMONPARAM__CTOR_OFFSET))(this);
		}
	};
}

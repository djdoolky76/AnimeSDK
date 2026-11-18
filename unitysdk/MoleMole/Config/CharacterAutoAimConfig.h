#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AutoAimSearchMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHARACTERAUTOAIMCONFIG_MOLEMOLE_CONFIG_ICHARACTERASSISTAIMCONFIG_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x11E86BC0)
#define MOLEMOLE_CONFIG_CHARACTERAUTOAIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11E86C30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAutoAimConfig_TypeDefinitionIndex = 60692;

	class CharacterAutoAimConfig : public ::System::Object
	{
	public:
		::System::String* targetKey; // 0x10
		::System::String* chasingSpeedCurve; // 0x18
		::System::Single switchCoolDown; // 0x20
		::System::Single lockedMaxSpeed; // 0x24
		::System::Single switchDegreeLimit; // 0x28
		::System::Single switchDuration; // 0x2C
		::System::Single lockedDampTimeVertical; // 0x30
		::System::Single viewRatioXLimit; // 0x34
		::System::Single lockedDampTimeHorizontal; // 0x38
		::System::Single viewRatio; // 0x3C
		::System::Single chasingMaxSpeed; // 0x40
		::System::Single cameraProtectDistance; // 0x44
		::System::Single lostLockAngleOffset; // 0x48
		::System::Boolean switchOnDeath; // 0x4C
		::System::Boolean useSmoothChasing; // 0x4D
		::System::Boolean useSelfToEnemyViewRatio; // 0x4E
		::System::Byte _padding0[0x1];
		::System::Single viewRatioYLimit; // 0x50
		::MoleMole::Config::AutoAimSearchMode searchMode; // 0x54
		::System::Single switchInputThreshold; // 0x58
		::System::Single cameraProtectMinLimit; // 0x5C
		::System::Single switchSearchFOV; // 0x60
		::System::Single switchInputResetThreshold; // 0x64
		::System::Single cameraLimitSpeed; // 0x68
		::System::Single cameraProtectMinRatio; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAUTOAIMCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* MoleMole_Config_ICharacterAssistAimConfig_get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAUTOAIMCONFIG_MOLEMOLE_CONFIG_ICHARACTERASSISTAIMCONFIG_GET_LABEL_OFFSET))(this);
		}
	};
}

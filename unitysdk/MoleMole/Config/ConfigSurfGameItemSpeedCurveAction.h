#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemSpeedCurveType.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSPEEDCURVEACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x192AD9E0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSPEEDCURVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x192ADBB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemSpeedCurveAction_TypeDefinitionIndex = 65562;

	class ConfigSurfGameItemSpeedCurveAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x10
		::System::Single MinSpeed; // 0x18
		::System::Single MaxSpeed; // 0x1C
		::MoleMole::Config::ConfigSurfGameItemSpeedCurveType SpeedCurveType; // 0x20
		::System::Single Duration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSPEEDCURVEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSPEEDCURVEACTION_EXECUTE_OFFSET))(this);
		}
	};
}

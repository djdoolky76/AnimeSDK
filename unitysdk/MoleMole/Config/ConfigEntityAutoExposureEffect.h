#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETEXPOSURECOMPENSATION_OFFSET UNITYSDK_OFFSET(0x11E8D540)
#define MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETFILTERING_OFFSET UNITYSDK_OFFSET(0x11E8D440)
#define MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETLUMINANCERANGE_OFFSET UNITYSDK_OFFSET(0x11E8D4C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETPROGRESSIVEEYEADAPTATION_OFFSET UNITYSDK_OFFSET(0x11E8D5C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETSPEEDDOWN_OFFSET UNITYSDK_OFFSET(0x11E8D6C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETSPEEDUP_OFFSET UNITYSDK_OFFSET(0x11E8D640)
#define MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E8D740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAutoExposureEffect_TypeDefinitionIndex = 39686;

	class ConfigEntityAutoExposureEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* SpeedUp; // 0x40
		::MoleMole::Config::ScreenEffectVector2* LuminanceRange; // 0x48
		::MoleMole::Config::ScreenEffectVector2* Filtering; // 0x50
		::MoleMole::Config::ScreenEffectFloat* ExposureCompensation; // 0x58
		::MoleMole::Config::ScreenEffectBool* ProgressiveEyeAdaptation; // 0x60
		::MoleMole::Config::ScreenEffectFloat* SpeedDown; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType LuminanceRangeHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType FilteringHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType SpeedDownHandleType; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType SpeedUpHandleType; // 0x7C
		::MoleMole::Config::ScreenEffectFieldHandleType ExposureCompensationHandleType; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType ProgressiveEyeAdaptationHandleType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetFiltering(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETFILTERING_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetLuminanceRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETLUMINANCERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetExposureCompensation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETEXPOSURECOMPENSATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetProgressiveEyeAdaptation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETPROGRESSIVEEYEADAPTATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSpeedUp(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETSPEEDUP_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSpeedDown(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAUTOEXPOSUREEFFECT_GETSPEEDDOWN_OFFSET))(this, curTime, realHoldTime);
		}
	};
}

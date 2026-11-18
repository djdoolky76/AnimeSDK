#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETAMOUNT_OFFSET UNITYSDK_OFFSET(0x12772830)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x127729B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETENABLE_OFFSET UNITYSDK_OFFSET(0x12772740)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x127727B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x127728B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x12772930)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12772A30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityUnsharpMaskEffect_TypeDefinitionIndex = 53878;

	class ConfigEntityUnsharpMaskEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* threshold; // 0x40
		::MoleMole::Config::ScreenEffectBool* debugMode; // 0x48
		::MoleMole::Config::ScreenEffectFloat* sampleCount; // 0x50
		::MoleMole::Config::ScreenEffectFloat* amount; // 0x58
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x60
		::System::Boolean enable; // 0x68
		::System::Byte _padding0[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType debugModeHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType amountHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType sampleCountHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType thresholdHandleType; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType enableHandleType; // 0x7C
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnable(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETENABLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetAmount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETAMOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetSampleCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETSAMPLECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDebugMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETDEBUGMODE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AttackPropConfigType.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/ShakeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174F7610)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x174F50F0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x174F7670)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x174F5170)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x174F7E90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraShake_TypeDefinitionIndex = 66004;

	class ConfigCameraShake : public ::System::Object
	{
	public:
		// static const ::System::String* CONFIG_PATH; // 0x0
		::System::String* CurveKey; // 0x10
		::System::String* StandardConfigKey; // 0x18
		::System::String* CustomCurveKey; // 0x20
		::System::String* FadeOutCurve; // 0x28
		::System::String* ShakeCenterAttachPoint; // 0x30
		::System::String* FadeInCurve; // 0x38
		::MoleMole::Config::DissipationMode DissipationMode; // 0x40
		::System::Single ImpactRadius; // 0x44
		::System::Single RollAmplitude; // 0x48
		::MoleMole::Config::AttackPropConfigType CameraShakePropConfigEnum; // 0x4C
		::System::Single NoiseAngle; // 0x50
		::System::Single DistanceToPlane; // 0x54
		::System::Int32 PlayPriority; // 0x58
		::System::Single PitchAmplitude; // 0x5C
		::MoleMole::Config::ConfigDataPlayStacking PlayStackingType; // 0x60
		::System::Single NoiseRatio; // 0x64
		::System::Single RadiusLength; // 0x68
		::System::Single ShakeTotalTime; // 0x6C
		::MoleMole::Config::ShakeType ShakeType; // 0x70
		::System::Single YawAmplitude; // 0x74
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x78
		::System::Single FadeOutDuration; // 0x7C
		::System::Single AngleVertical; // 0x80
		::System::Single FadeInDuration; // 0x84
		::System::Boolean IngoreTimeScale; // 0x88
		::System::Boolean RealtimeVibration; // 0x89
		::System::Byte _padding0[0x2];
		::System::Single DissipationDistance; // 0x8C
		::System::Single Frequency; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}

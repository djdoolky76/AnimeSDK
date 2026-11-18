#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x121B6900)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x121B3B60)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x121B6960)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x121B3BE0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x121B74C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStretch_TypeDefinitionIndex = 58035;

	class ConfigCameraStretch : public ::System::Object
	{
	public:
		::System::String* StartCurveKey; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* RuntimeCamFollowYPoints; // 0x18
		::System::String* EndCurveKey; // 0x20
		::System::Single ElevationAngleMax; // 0x28
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x2C
		::System::Boolean CamOffsetLocalCoords; // 0x30
		::System::Boolean IgnoreLocalAvatar; // 0x31
		::System::Boolean IsEndEleAngleAbsoluted; // 0x32
		::System::Boolean ApplyRuntimeCamFollowYOffset; // 0x33
		::System::Single ElevationAngleMin; // 0x34
		::System::Single HoldTime; // 0x38
		::MoleMole::Config::ValueVariationType FovVariationType; // 0x3C
		::System::Single PosOffsetY; // 0x40
		::System::Boolean ApplyAthPtsCamFollowYOffset; // 0x44
		::System::Boolean IgnoreOwnerTimeScale; // 0x45
		::System::Boolean IgnoreWorldTimeScale; // 0x46
		::System::Boolean IngorePriorityInEndTime; // 0x47
		::System::Single EndElevationAngleMax; // 0x48
		::MoleMole::Config::CameraConfigDataStacking StackingType; // 0x4C
		::System::Single PosOffsetZ; // 0x50
		::System::Single RotationZ; // 0x54
		::MoleMole::Config::ConfigDataPlayStacking PlayStackingType; // 0x58
		::System::Single RecoilTime; // 0x5C
		::System::Single EndElevationAngleMin; // 0x60
		::System::Single RadiusRatio; // 0x64
		::System::Boolean IsAppliedZoom; // 0x68
		::System::Boolean IsAppliedEndEleAngle; // 0x69
		::System::Boolean IsEleAngleAbsoluted; // 0x6A
		::System::Boolean IsAppliedEleRatio; // 0x6B
		::System::Single ZoomFov; // 0x6C
		::System::Single PosOffsetX; // 0x70
		::System::Single DelayTime; // 0x74
		::System::Single RuntimeCamFollowYOffsetRatio; // 0x78
		::System::Single StretchTime; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}

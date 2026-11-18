#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x131DE090)
#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x131DD280)
#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x131DE0F0)
#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x131DD300)
#define MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR__CTOR_OFFSET UNITYSDK_OFFSET(0x131DE510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraPitchPolar_TypeDefinitionIndex = 58809;

	class ConfigCameraPitchPolar : public ::System::Object
	{
	public:
		::System::String* StartCurveKey; // 0x10
		::System::Single PolarOffsetAngle; // 0x18
		::MoleMole::Config::CameraConfigDataStacking StackingType; // 0x1C
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x20
		::System::Single ElevationAngle; // 0x24
		::System::Single StartTime; // 0x28
		::System::Boolean IngoreTimeScale; // 0x2C
		::System::Boolean IgnoreLocalAvatar; // 0x2D
		::System::Byte _padding0[0x2];
		::MoleMole::Config::ValueVariationType FovVariationType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAPITCHPOLAR_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}

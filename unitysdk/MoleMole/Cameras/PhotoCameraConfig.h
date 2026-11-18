#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/PhotoCameraDefaultSetting.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_CAMERAS_PHOTOCAMERACONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5AF110)
#define MOLEMOLE_CAMERAS_PHOTOCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AF0C0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int PhotoCameraConfig_TypeDefinitionIndex = 44222;

	class PhotoCameraConfig : public ::System::Object
	{
	public:
		::System::Single minPitch; // 0x10
		::System::Single maxPitch; // 0x14
		::System::Single minRadius; // 0x18
		::System::Single maxRadius; // 0x1C
		::System::Single maxHorizontalScreenOffset; // 0x20
		::System::Single maxVerticalScreenOffset; // 0x24
		::System::Single minVerticalScreenOffset; // 0x28
		::System::Single minFieldOfView; // 0x2C
		::System::Single maxFieldOfView; // 0x30
		::System::Single aspectRatio; // 0x34
		::MoleMole::Cameras::PhotoCameraDefaultSetting defaultSetting; // 0x38
		::System::Boolean useBlend; // 0x58
		::System::Byte _padding0[0x7];
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x60
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_PHOTOCAMERACONFIG__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single KJHPKFCFAMP, ::System::Single BAFOIENGGLP, ::System::Single BHPHKIKEJJM, ::System::Single LCPLGJDNHHB, ::System::Single DDILKDCIEGJ, ::System::Single AOBEINLCOAO, ::System::Single NDNOBNMGBNA, ::System::Single OPIAIKKEEJH, ::System::Single FNLGFLNJFBP, ::System::Single EGCKEINKEPM, ::MoleMole::Cameras::PhotoCameraDefaultSetting LJAEJBHNBFE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::PhotoCameraDefaultSetting))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_PHOTOCAMERACONFIG__CTOR_1_OFFSET))(this, KJHPKFCFAMP, BAFOIENGGLP, BHPHKIKEJJM, LCPLGJDNHHB, DDILKDCIEGJ, AOBEINLCOAO, NDNOBNMGBNA, OPIAIKKEEJH, FNLGFLNJFBP, EGCKEINKEPM, LJAEJBHNBFE);
		}
	};
}

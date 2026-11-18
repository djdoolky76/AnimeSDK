#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Cameras/CameraDelayMoveDataBlendDefinition.h"

#define MOLEMOLE_CAMERAS_DELAYBLENDERSETTINGS_GETBLENDCURVE_OFFSET UNITYSDK_OFFSET(0x163E3C60)
#define MOLEMOLE_CAMERAS_DELAYBLENDERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x163E3DC0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int DelayBlenderSettings_TypeDefinitionIndex = 56218;

	class DelayBlenderSettings : public ::System::Object
	{
	public:
		// static const ::MoleMole::Config::CameraDelayMoveMode kBlendFromAnyCameraLabel = 0x63; // 0x0
		::Il2CppArray<::System::Object*>* m_CustomBlends; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DELAYBLENDERSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean GetBlendCurve(::MoleMole::Config::CameraDelayMoveMode fromCameraName, ::MoleMole::Config::CameraDelayMoveMode toCameraName, ::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition& defaultCustomBlends)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode, ::MoleMole::Config::CameraDelayMoveMode, ::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DELAYBLENDERSETTINGS_GETBLENDCURVE_OFFSET))(this, fromCameraName, toCameraName, defaultCustomBlends);
		}
	};
}

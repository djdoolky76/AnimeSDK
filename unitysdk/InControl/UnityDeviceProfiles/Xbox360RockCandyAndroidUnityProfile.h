#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB41010)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB3FD20)

namespace InControl::UnityDeviceProfiles
{
	class Xbox360RockCandyAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

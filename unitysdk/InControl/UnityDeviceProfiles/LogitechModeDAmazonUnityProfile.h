#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BADD9B0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BADC750)

namespace InControl::UnityDeviceProfiles
{
	class LogitechModeDAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

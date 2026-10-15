#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8EE00)
#define INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA8DDC0)

namespace InControl::UnityDeviceProfiles
{
	class AppleTVWirelessControllerUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

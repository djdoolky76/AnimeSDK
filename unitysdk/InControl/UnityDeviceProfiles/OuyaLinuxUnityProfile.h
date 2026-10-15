#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB02830)
#define INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB016D0)

namespace InControl::UnityDeviceProfiles
{
	class OuyaLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

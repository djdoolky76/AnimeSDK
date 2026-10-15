#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4ANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0FF00)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB0EC30)

namespace InControl::UnityDeviceProfiles
{
	class PlayStation4AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4ANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

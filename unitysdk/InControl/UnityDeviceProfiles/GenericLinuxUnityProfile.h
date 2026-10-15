#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GENERICLINUXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BABAA50)
#define INCONTROL_UNITYDEVICEPROFILES_GENERICLINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BAB9490)

namespace InControl::UnityDeviceProfiles
{
	class GenericLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GENERICLINUXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GENERICLINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

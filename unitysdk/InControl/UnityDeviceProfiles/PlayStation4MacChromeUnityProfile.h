#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACCHROMEUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB131E0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB11E40)

namespace InControl::UnityDeviceProfiles
{
	class PlayStation4MacChromeUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACCHROMEUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACCHROMEUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3BWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB088B0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3BWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB07620)

namespace InControl::UnityDeviceProfiles
{
	class PlayStation3BWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3BWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3BWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

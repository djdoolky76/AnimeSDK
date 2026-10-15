#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB303D0)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB2F180)

namespace InControl::UnityDeviceProfiles
{
	class SteelSeriesFreeWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

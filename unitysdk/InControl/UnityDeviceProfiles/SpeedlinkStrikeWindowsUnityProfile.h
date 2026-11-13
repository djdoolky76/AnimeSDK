#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC684A60)
#define INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC683800)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SpeedlinkStrikeWindowsUnityProfile_TypeDefinitionIndex = 42069;

	class SpeedlinkStrikeWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

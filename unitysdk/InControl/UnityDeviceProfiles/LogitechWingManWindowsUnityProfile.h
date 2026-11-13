#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHWINGMANWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC639220)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHWINGMANWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC637FC0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechWingManWindowsUnityProfile_TypeDefinitionIndex = 42053;

	class LogitechWingManWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHWINGMANWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHWINGMANWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

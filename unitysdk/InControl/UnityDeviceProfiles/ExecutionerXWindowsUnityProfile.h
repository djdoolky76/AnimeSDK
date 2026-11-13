#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC602F70)
#define INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC601CE0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int ExecutionerXWindowsUnityProfile_TypeDefinitionIndex = 42041;

	class ExecutionerXWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

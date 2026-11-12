#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XIAMOIWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD88B0)
#define INCONTROL_UNITYDEVICEPROFILES_XIAMOIWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCD7670)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XiamoiWindowsUnityProfile_TypeDefinitionIndex = 42079;

	class XiamoiWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XIAMOIWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XIAMOIWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

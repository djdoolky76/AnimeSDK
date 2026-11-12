#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC879A0)
#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC868F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NintendoSwitchProWindowsUnityProfile_TypeDefinitionIndex = 42061;

	class NintendoSwitchProWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

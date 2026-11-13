#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E7F30)
#define INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC5E6EF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AppleTVWirelessControllerUnityProfile_TypeDefinitionIndex = 41969;

	class AppleTVWirelessControllerUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEXAMAZONUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC679F0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEXAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC666F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechModeXAmazonUnityProfile_TypeDefinitionIndex = 41904;

	class LogitechModeXAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEXAMAZONUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEXAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

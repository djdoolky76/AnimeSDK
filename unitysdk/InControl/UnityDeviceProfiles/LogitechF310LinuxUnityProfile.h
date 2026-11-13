#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310LINUXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC625B50)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC6248C0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310LinuxUnityProfile_TypeDefinitionIndex = 41973;

	class LogitechF310LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310LINUXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

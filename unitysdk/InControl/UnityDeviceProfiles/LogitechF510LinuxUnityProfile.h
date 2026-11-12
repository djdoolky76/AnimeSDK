#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510LINUXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5B7B0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC5A520)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF510LinuxUnityProfile_TypeDefinitionIndex = 41974;

	class LogitechF510LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510LINUXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

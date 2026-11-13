#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC65B960)
#define INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC65A800)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int OuyaLinuxUnityProfile_TypeDefinitionIndex = 41977;

	class OuyaLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

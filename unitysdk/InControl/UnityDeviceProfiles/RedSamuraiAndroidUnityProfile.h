#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_REDSAMURAIANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCAFB90)
#define INCONTROL_UNITYDEVICEPROFILES_REDSAMURAIANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCAE930)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int RedSamuraiAndroidUnityProfile_TypeDefinitionIndex = 41961;

	class RedSamuraiAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_REDSAMURAIANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_REDSAMURAIANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

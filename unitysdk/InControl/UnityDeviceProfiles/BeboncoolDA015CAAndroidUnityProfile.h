#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BEBONCOOLDA015CAANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA914C0)
#define INCONTROL_UNITYDEVICEPROFILES_BEBONCOOLDA015CAANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA90250)

namespace InControl::UnityDeviceProfiles
{
	class BeboncoolDA015CAAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BEBONCOOLDA015CAANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BEBONCOOLDA015CAANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

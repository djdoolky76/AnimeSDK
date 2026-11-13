#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAHEROPOWERANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC63F230)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAHEROPOWERANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC63E000)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaHeroPowerAndroidUnityProfile_TypeDefinitionIndex = 41945;

	class MogaHeroPowerAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAHEROPOWERANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAHEROPOWERANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

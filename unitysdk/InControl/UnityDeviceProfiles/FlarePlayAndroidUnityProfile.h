#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_FLAREPLAYANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC606940)
#define INCONTROL_UNITYDEVICEPROFILES_FLAREPLAYANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC605820)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int FlarePlayAndroidUnityProfile_TypeDefinitionIndex = 41931;

	class FlarePlayAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_FLAREPLAYANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_FLAREPLAYANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

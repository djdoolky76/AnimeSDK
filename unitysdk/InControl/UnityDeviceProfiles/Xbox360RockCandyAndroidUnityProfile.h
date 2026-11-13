#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC69A140)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC698E50)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360RockCandyAndroidUnityProfile_TypeDefinitionIndex = 41966;

	class Xbox360RockCandyAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

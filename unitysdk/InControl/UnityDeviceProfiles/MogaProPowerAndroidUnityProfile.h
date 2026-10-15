#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BACA5C0)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BAC9390)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProPowerAndroidUnityProfile_TypeDefinitionIndex = 40972;

	class MogaProPowerAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

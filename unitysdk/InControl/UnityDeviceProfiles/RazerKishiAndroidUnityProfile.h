#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB231F0)
#define INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB21F00)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int RazerKishiAndroidUnityProfile_TypeDefinitionIndex = 40985;

	class RazerKishiAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BETOPBTPGENERICANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1DC00)
#define INCONTROL_UNITYDEVICEPROFILES_BETOPBTPGENERICANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC1C8B0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BetopBTPGenericAndroidUnityProfile_TypeDefinitionIndex = 41917;

	class BetopBTPGenericAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BETOPBTPGENERICANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BETOPBTPGENERICANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E1CC0)
#define INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC5E0A30)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AmazonFireTVUnityProfile_TypeDefinitionIndex = 41900;

	class AmazonFireTVUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

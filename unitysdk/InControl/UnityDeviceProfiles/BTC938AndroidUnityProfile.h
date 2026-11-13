#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BTC938ANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E9290)
#define INCONTROL_UNITYDEVICEPROFILES_BTC938ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC5E8020)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BTC938AndroidUnityProfile_TypeDefinitionIndex = 41914;

	class BTC938AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BTC938ANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BTC938ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

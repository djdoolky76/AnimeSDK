#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALFORGETVUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC67D910)
#define INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALFORGETVUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC67C410)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int RazerServalForgeTVUnityProfile_TypeDefinitionIndex = 42019;

	class RazerServalForgeTVUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALFORGETVUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALFORGETVUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

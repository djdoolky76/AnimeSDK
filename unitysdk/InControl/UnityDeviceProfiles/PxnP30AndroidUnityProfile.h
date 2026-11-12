#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PXNP30ANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCAAA60)
#define INCONTROL_UNITYDEVICEPROFILES_PXNP30ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCA97F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PxnP30AndroidUnityProfile_TypeDefinitionIndex = 41959;

	class PxnP30AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PXNP30ANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PXNP30ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

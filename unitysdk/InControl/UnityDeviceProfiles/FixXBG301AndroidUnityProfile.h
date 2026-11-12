#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_FIXXBG301ANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC33EF0)
#define INCONTROL_UNITYDEVICEPROFILES_FIXXBG301ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC32B80)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int FixXBG301AndroidUnityProfile_TypeDefinitionIndex = 41929;

	class FixXBG301AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_FIXXBG301ANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_FIXXBG301ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

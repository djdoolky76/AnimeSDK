#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360LINUXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC3A20)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCC2330)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360LinuxUnityProfile_TypeDefinitionIndex = 41982;

	class Xbox360LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360LINUXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

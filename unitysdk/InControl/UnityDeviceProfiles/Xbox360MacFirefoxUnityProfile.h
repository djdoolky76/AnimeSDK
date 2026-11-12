#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACFIREFOXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC6110)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACFIREFOXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCC4F80)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360MacFirefoxUnityProfile_TypeDefinitionIndex = 42025;

	class Xbox360MacFirefoxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACFIREFOXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACFIREFOXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

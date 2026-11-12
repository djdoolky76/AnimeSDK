#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACFIREFOXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCF2B0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACFIREFOXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCCDF30)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMacFirefoxUnityProfile_TypeDefinitionIndex = 42028;

	class XboxOneMacFirefoxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACFIREFOXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACFIREFOXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

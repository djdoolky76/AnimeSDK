#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10AEUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD3FB0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10AEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCD2DF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWindows10AEUnityProfile_TypeDefinitionIndex = 42076;

	class XboxOneWindows10AEUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10AEUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10AEUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

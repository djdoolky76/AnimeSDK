#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10UNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A5740)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10UNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC6A4580)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWindows10UnityProfile_TypeDefinitionIndex = 42077;

	class XboxOneWindows10UnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10UNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10UNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

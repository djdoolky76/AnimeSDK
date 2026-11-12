#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8ED70)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC8DB10)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation2WindowsUnityProfile_TypeDefinitionIndex = 42063;

	class PlayStation2WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

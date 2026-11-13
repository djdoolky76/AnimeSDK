#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A1D20)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC6A0A50)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMacUnityProfile_TypeDefinitionIndex = 42008;

	class XboxOneMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

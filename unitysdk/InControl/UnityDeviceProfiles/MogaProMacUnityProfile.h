#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROMACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC72700)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC714A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProMacUnityProfile_TypeDefinitionIndex = 41995;

	class MogaProMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROMACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

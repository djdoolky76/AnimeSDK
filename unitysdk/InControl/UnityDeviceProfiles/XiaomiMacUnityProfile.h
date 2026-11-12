#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XIAOMIMACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD9BF0)
#define INCONTROL_UNITYDEVICEPROFILES_XIAOMIMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCD89A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XiaomiMacUnityProfile_TypeDefinitionIndex = 42010;

	class XiaomiMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XIAOMIMACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XIAOMIMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

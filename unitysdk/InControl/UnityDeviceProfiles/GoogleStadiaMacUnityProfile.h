#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC614EF0)
#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC613C70)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaMacUnityProfile_TypeDefinitionIndex = 41989;

	class GoogleStadiaMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

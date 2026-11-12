#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NATECGENESISP44WINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC7EC40)
#define INCONTROL_UNITYDEVICEPROFILES_NATECGENESISP44WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC7D930)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NatecGenesisP44WindowsUnityProfile_TypeDefinitionIndex = 42059;

	class NatecGenesisP44WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NATECGENESISP44WINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NATECGENESISP44WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

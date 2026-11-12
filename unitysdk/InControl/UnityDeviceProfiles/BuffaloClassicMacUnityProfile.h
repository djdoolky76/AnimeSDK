#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICMACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1EF70)
#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC1E5C0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicMacUnityProfile_TypeDefinitionIndex = 41984;

	class BuffaloClassicMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICMACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

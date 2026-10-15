#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30WINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA86F30)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA86620)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSNES30WindowsUnityProfile_TypeDefinitionIndex = 41065;

	class EightBitdoSNES30WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30WINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

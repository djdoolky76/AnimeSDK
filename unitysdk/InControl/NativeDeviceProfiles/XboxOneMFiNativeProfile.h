#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEMFINATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x15619780)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEMFINATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x156184A0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMFiNativeProfile_TypeDefinitionIndex = 42226;

	class XboxOneMFiNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEMFINATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEMFINATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

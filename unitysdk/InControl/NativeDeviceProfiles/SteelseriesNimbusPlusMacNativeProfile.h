#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSPLUSMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDC1F0)
#define INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSPLUSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBDB550)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SteelseriesNimbusPlusMacNativeProfile_TypeDefinitionIndex = 42244;

	class SteelseriesNimbusPlusMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSPLUSMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSPLUSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

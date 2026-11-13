#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MVCTESTICKMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FD1400)
#define INCONTROL_NATIVEDEVICEPROFILES_MVCTESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FD1340)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MVCTEStickMacNativeProfile_TypeDefinitionIndex = 42138;

	class MVCTEStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MVCTESTICKMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MVCTESTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONEARCADESTICKMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB85D0)
#define INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONEARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBB8550)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PDPXboxOneArcadeStickMacNativeProfile_TypeDefinitionIndex = 42184;

	class PDPXboxOneArcadeStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONEARCADESTICKMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONEARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

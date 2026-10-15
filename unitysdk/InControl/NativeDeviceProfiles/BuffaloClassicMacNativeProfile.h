#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E6840)
#define INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B9E5F60)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicMacNativeProfile_TypeDefinitionIndex = 41253;

	class BuffaloClassicMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}

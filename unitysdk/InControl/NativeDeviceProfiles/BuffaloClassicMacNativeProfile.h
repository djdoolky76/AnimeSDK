#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8FD70)
#define INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CB8F490)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicMacNativeProfile_TypeDefinitionIndex = 42228;

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

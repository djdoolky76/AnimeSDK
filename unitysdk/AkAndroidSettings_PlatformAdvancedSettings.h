#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAndroidSettings_PlatformAdvancedSettings_B9AEED55C5000E11.h"
#include "unitysdk/AkCommonAdvancedSettings.h"

class F963926B710ECDE0;

#define AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2911EF0)

inline static constexpr unsigned int AkAndroidSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 19731;

class AkAndroidSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::AkAndroidSettings_PlatformAdvancedSettings_B9AEED55C5000E11 m_AudioAPI; // 0x58
	::System::Boolean m_RoundFrameSizeToHardwareSize; // 0x5C
	::System::Boolean m_UseLowLatencyMode; // 0x5D

	::System::Void CopyTo(::F963926B710ECDE0* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::F963926B710ECDE0*))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}
};

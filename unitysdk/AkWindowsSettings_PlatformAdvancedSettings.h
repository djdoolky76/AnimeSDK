#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings.h"

class F963926B710ECDE0;

#define AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x2911E00)
#define AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2911EA0)

inline static constexpr unsigned int AkWindowsSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 19768;

class AkWindowsSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::System::UInt32 MaxSystemAudioObjects; // 0x58

	::System::Void CopyTo(::F963926B710ECDE0* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::F963926B710ECDE0*))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}
};

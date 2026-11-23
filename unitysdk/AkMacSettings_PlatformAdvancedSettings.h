#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings.h"

class F963926B710ECDE0;

#define AKMACSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AKMACSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2911EA0)

inline static constexpr unsigned int AkMacSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 19758;

class AkMacSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::System::UInt32 NumSpatialAudioPointSources; // 0x58
	::System::Boolean VerboseSystemOutput; // 0x5C

	::System::Void CopyTo(::F963926B710ECDE0* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::F963926B710ECDE0*))((::PBYTE)hIl2Cpp + AKMACSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMACSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}
};

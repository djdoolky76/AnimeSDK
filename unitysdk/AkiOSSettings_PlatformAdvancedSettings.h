#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings.h"
#include "unitysdk/AkiOSSettings_PlatformAdvancedSettings_EB44D6655561E860.h"
#include "unitysdk/AkiOSSettings_PlatformAdvancedSettings_F2C66747C5AEE2D8.h"
#include "unitysdk/AkiOSSettings_PlatformAdvancedSettings_FB8C7F8520AB7D7F.h"

class F963926B710ECDE0;

#define AKIOSSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AKIOSSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2911F40)

inline static constexpr unsigned int AkiOSSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 19782;

class AkiOSSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::AkiOSSettings_PlatformAdvancedSettings_FB8C7F8520AB7D7F m_AudioSessionCategory; // 0x58
	::AkiOSSettings_PlatformAdvancedSettings_EB44D6655561E860 m_AudioSessionCategoryOptions; // 0x5C
	::AkiOSSettings_PlatformAdvancedSettings_F2C66747C5AEE2D8 m_AudioSessionMode; // 0x60
	::System::UInt32 NumSpatialAudioPointSources; // 0x64
	::System::Boolean VerboseSystemOutput; // 0x68

	::System::Void CopyTo(::F963926B710ECDE0* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::F963926B710ECDE0*))((::PBYTE)hIl2Cpp + AKIOSSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIOSSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}
};

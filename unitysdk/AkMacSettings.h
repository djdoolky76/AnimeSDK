#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_CommonPlatformSettings.h"

#define AKMACSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A51D0)

	class AkMacSettings : public ::AkWwiseInitializationSettings_CommonPlatformSettings
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMACSETTINGS_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CONFIGLIGHTSETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13281E30)

inline static constexpr unsigned int ConfigLightSettingData_TypeDefinitionIndex = 43325;

class ConfigLightSettingData : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGLIGHTSETTINGDATA__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define PMKDEEKDEBK_JKGFDPNFEEF_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1BF29DD0)
#define PMKDEEKDEBK_JKGFDPNFEEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF29DC0)

inline static constexpr unsigned int PMKDEEKDEBK_JKGFDPNFEEF_TypeDefinitionIndex = 80348;

class PMKDEEKDEBK_JKGFDPNFEEF : public ::System::Object
{
public:
	::HOCDHMEPPEG JOHEEFEMFCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKDEEKDEBK_JKGFDPNFEEF__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMKDEEKDEBK_JKGFDPNFEEF_LIDNPLMPHAL_OFFSET))(this, EGEGIMGMJHN);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define PCJBIPHJDPG_AGHPCBJHBEA_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15533410)
#define PCJBIPHJDPG_AGHPCBJHBEA__CTOR_OFFSET UNITYSDK_OFFSET(0x15533400)

inline static constexpr unsigned int PCJBIPHJDPG_AGHPCBJHBEA_TypeDefinitionIndex = 53984;

class PCJBIPHJDPG_AGHPCBJHBEA : public ::System::Object
{
public:
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJBIPHJDPG_AGHPCBJHBEA__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJBIPHJDPG_AGHPCBJHBEA_LIDNPLMPHAL_OFFSET))(this);
	}
};

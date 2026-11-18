#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;

#define PDLAABIBLOK_IKEIDHKAHAP_IDMCLKNFCJC_OFFSET UNITYSDK_OFFSET(0x19499570)
#define PDLAABIBLOK_IKEIDHKAHAP__CTOR_OFFSET UNITYSDK_OFFSET(0x194994C0)

inline static constexpr unsigned int PDLAABIBLOK_IKEIDHKAHAP_TypeDefinitionIndex = 62039;

class PDLAABIBLOK_IKEIDHKAHAP : public ::System::Object
{
public:
	::IBENDELLLAO* CBPIMBAAIPH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDLAABIBLOK_IKEIDHKAHAP__CTOR_OFFSET))(this);
	}

	::System::Void IDMCLKNFCJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDLAABIBLOK_IKEIDHKAHAP_IDMCLKNFCJC_OFFSET))(this);
	}
};

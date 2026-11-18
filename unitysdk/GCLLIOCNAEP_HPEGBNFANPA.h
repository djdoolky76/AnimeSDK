#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;

#define GCLLIOCNAEP_HPEGBNFANPA_IDMCLKNFCJC_OFFSET UNITYSDK_OFFSET(0x13DB71C0)
#define GCLLIOCNAEP_HPEGBNFANPA__CTOR_OFFSET UNITYSDK_OFFSET(0x13DB71B0)

inline static constexpr unsigned int GCLLIOCNAEP_HPEGBNFANPA_TypeDefinitionIndex = 74049;

class GCLLIOCNAEP_HPEGBNFANPA : public ::System::Object
{
public:
	::IBENDELLLAO* CBPIMBAAIPH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLLIOCNAEP_HPEGBNFANPA__CTOR_OFFSET))(this);
	}

	::System::Void IDMCLKNFCJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLLIOCNAEP_HPEGBNFANPA_IDMCLKNFCJC_OFFSET))(this);
	}
};

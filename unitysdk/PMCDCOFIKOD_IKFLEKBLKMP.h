#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;

#define PMCDCOFIKOD_IKFLEKBLKMP_IDMCLKNFCJC_OFFSET UNITYSDK_OFFSET(0x1C2BF4A0)
#define PMCDCOFIKOD_IKFLEKBLKMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BF490)

inline static constexpr unsigned int PMCDCOFIKOD_IKFLEKBLKMP_TypeDefinitionIndex = 62678;

class PMCDCOFIKOD_IKFLEKBLKMP : public ::System::Object
{
public:
	::IBENDELLLAO* CBPIMBAAIPH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCDCOFIKOD_IKFLEKBLKMP__CTOR_OFFSET))(this);
	}

	::System::Void IDMCLKNFCJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCDCOFIKOD_IKFLEKBLKMP_IDMCLKNFCJC_OFFSET))(this);
	}
};

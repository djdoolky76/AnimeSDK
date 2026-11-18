#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define KOKPJKIKMEC_DHGNFBPDALD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x17734330)
#define KOKPJKIKMEC_DHGNFBPDALD__CTOR_OFFSET UNITYSDK_OFFSET(0x17734320)

inline static constexpr unsigned int KOKPJKIKMEC_DHGNFBPDALD_TypeDefinitionIndex = 39935;

class KOKPJKIKMEC_DHGNFBPDALD : public ::System::Object
{
public:
	::HOCDHMEPPEG PHHDHIBOCKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKPJKIKMEC_DHGNFBPDALD__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOKPJKIKMEC_DHGNFBPDALD_LIDNPLMPHAL_OFFSET))(this, PIIPCLCCOIG);
	}
};

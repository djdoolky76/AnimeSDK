#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPCONFEPCPD_JOAJCEANOEL_AHLGNAMPCEI_OFFSET UNITYSDK_OFFSET(0x17B1D950)
#define HPCONFEPCPD_JOAJCEANOEL_COGFENEMCDA_OFFSET UNITYSDK_OFFSET(0x17B1D940)
#define HPCONFEPCPD_JOAJCEANOEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17B1D930)

inline static constexpr unsigned int HPCONFEPCPD_JOAJCEANOEL_TypeDefinitionIndex = 90927;

class HPCONFEPCPD_JOAJCEANOEL : public ::System::Object
{
public:
	::System::Single PIGGBOPKIJB; // 0x10
	::System::Single AAGNFHPENFD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_JOAJCEANOEL__CTOR_OFFSET))(this);
	}

	::System::Single COGFENEMCDA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_JOAJCEANOEL_COGFENEMCDA_OFFSET))(this);
	}

	::System::Single AHLGNAMPCEI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_JOAJCEANOEL_AHLGNAMPCEI_OFFSET))(this);
	}
};

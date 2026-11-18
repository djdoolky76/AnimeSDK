#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

#define MECFDIENHLL_GINNFFDECME_MLFAJIKFFNG_OFFSET UNITYSDK_OFFSET(0x15E22DB0)
#define MECFDIENHLL_GINNFFDECME__CTOR_OFFSET UNITYSDK_OFFSET(0x15E22DA0)

inline static constexpr unsigned int MECFDIENHLL_GINNFFDECME_TypeDefinitionIndex = 91411;

class MECFDIENHLL_GINNFFDECME : public ::System::Object
{
public:
	::System::Int32 BKEDOGMDOOJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECFDIENHLL_GINNFFDECME__CTOR_OFFSET))(this);
	}

	::System::Boolean MLFAJIKFFNG(::DEDDPKGLKHI_LODLFMBCLAH OFNDMBEELON)
	{
		return ((::System::Boolean(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MECFDIENHLL_GINNFFDECME_MLFAJIKFFNG_OFFSET))(this, OFNDMBEELON);
	}
};

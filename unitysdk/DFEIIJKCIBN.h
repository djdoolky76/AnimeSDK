#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDJCPJFICIG.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define DFEIIJKCIBN_ECOEGDPJNNG_OFFSET UNITYSDK_OFFSET(0x19D5CA60)
#define DFEIIJKCIBN_IFLLEJAJBPE_OFFSET UNITYSDK_OFFSET(0x19D5CA70)
#define DFEIIJKCIBN__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5CE90)

inline static constexpr unsigned int DFEIIJKCIBN_TypeDefinitionIndex = 54582;

class DFEIIJKCIBN : public ::LDJCPJFICIG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEIIJKCIBN__CTOR_OFFSET))(this);
	}

	::System::Boolean ECOEGDPJNNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEIIJKCIBN_ECOEGDPJNNG_OFFSET))(this);
	}

	::EOAHOOCNDHM IFLLEJAJBPE(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DFEIIJKCIBN_IFLLEJAJBPE_OFFSET))(this, BKBGPKNGNMF);
	}
};

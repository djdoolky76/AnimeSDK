#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define KPMAJOILOKN_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x17679540)
#define KPMAJOILOKN__CTOR_OFFSET UNITYSDK_OFFSET(0x17679460)

inline static constexpr unsigned int KPMAJOILOKN_TypeDefinitionIndex = 91827;

class KPMAJOILOKN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAJOILOKN__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + KPMAJOILOKN_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

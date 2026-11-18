#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define PJMCECMDENJ_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x178DEE80)
#define PJMCECMDENJ__CTOR_OFFSET UNITYSDK_OFFSET(0x178DEE10)

inline static constexpr unsigned int PJMCECMDENJ_TypeDefinitionIndex = 63661;

class PJMCECMDENJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMCECMDENJ__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + PJMCECMDENJ_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

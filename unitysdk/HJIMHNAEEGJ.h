#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define HJIMHNAEEGJ_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x14A1B7A0)
#define HJIMHNAEEGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1B700)

inline static constexpr unsigned int HJIMHNAEEGJ_TypeDefinitionIndex = 39483;

class HJIMHNAEEGJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIMHNAEEGJ__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + HJIMHNAEEGJ_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define DCFACDPMJDO_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x193F8A10)
#define DCFACDPMJDO__CTOR_OFFSET UNITYSDK_OFFSET(0x193F8930)

inline static constexpr unsigned int DCFACDPMJDO_TypeDefinitionIndex = 55391;

class DCFACDPMJDO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFACDPMJDO__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + DCFACDPMJDO_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

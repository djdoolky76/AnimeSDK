#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define IHEDPDGHDMM_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x12EB0390)
#define IHEDPDGHDMM__CTOR_OFFSET UNITYSDK_OFFSET(0x12EB02B0)

inline static constexpr unsigned int IHEDPDGHDMM_TypeDefinitionIndex = 90364;

class IHEDPDGHDMM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEDPDGHDMM__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + IHEDPDGHDMM_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

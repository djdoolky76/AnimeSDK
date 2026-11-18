#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define JHBHEFJBEMO_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x18A15260)
#define JHBHEFJBEMO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A15410)

inline static constexpr unsigned int JHBHEFJBEMO_TypeDefinitionIndex = 41899;

class JHBHEFJBEMO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBHEFJBEMO__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + JHBHEFJBEMO_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

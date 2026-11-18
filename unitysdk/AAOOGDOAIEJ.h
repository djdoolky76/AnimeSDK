#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define AAOOGDOAIEJ_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x181E4170)
#define AAOOGDOAIEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x181E42C0)

inline static constexpr unsigned int AAOOGDOAIEJ_TypeDefinitionIndex = 71178;

class AAOOGDOAIEJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOOGDOAIEJ__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + AAOOGDOAIEJ_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

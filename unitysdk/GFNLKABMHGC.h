#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define GFNLKABMHGC_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x149C1720)
#define GFNLKABMHGC__CTOR_OFFSET UNITYSDK_OFFSET(0x149C1680)

inline static constexpr unsigned int GFNLKABMHGC_TypeDefinitionIndex = 50706;

class GFNLKABMHGC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNLKABMHGC__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + GFNLKABMHGC_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

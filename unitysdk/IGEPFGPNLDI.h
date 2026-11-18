#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define IGEPFGPNLDI_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x15EBAE20)
#define IGEPFGPNLDI__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBAD40)

inline static constexpr unsigned int IGEPFGPNLDI_TypeDefinitionIndex = 63494;

class IGEPFGPNLDI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEPFGPNLDI__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + IGEPFGPNLDI_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

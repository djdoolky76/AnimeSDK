#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define GCEEKDPKIDF_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x116DEA90)
#define GCEEKDPKIDF__CTOR_OFFSET UNITYSDK_OFFSET(0x116DEBE0)

inline static constexpr unsigned int GCEEKDPKIDF_TypeDefinitionIndex = 61553;

class GCEEKDPKIDF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEEKDPKIDF__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + GCEEKDPKIDF_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

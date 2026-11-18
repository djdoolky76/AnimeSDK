#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

#define FOACINJLEDB_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x1750D9B0)
#define FOACINJLEDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1750D8D0)

inline static constexpr unsigned int FOACINJLEDB_TypeDefinitionIndex = 73689;

class FOACINJLEDB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOACINJLEDB__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OFMJHKMAJJC(::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + FOACINJLEDB_OFMJHKMAJJC_OFFSET))(this, LOACBJBANNC);
	}
};

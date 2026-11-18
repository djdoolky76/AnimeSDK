#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKKDCFLLIOF;
class NHJGPEGGLEO;

#define NHJGPEGGLEO_LCJEIEPLCFE_HPBMDMPGFGN_OFFSET UNITYSDK_OFFSET(0x11590560)
#define NHJGPEGGLEO_LCJEIEPLCFE__CTOR_OFFSET UNITYSDK_OFFSET(0x11590550)

inline static constexpr unsigned int NHJGPEGGLEO_LCJEIEPLCFE_TypeDefinitionIndex = 56082;

class NHJGPEGGLEO_LCJEIEPLCFE : public ::System::Object
{
public:
	::NHJGPEGGLEO* KLHPEBKNIFB; // 0x10
	::IKKDCFLLIOF* FEMBHENBOHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJGPEGGLEO_LCJEIEPLCFE__CTOR_OFFSET))(this);
	}

	::System::Void HPBMDMPGFGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJGPEGGLEO_LCJEIEPLCFE_HPBMDMPGFGN_OFFSET))(this);
	}
};

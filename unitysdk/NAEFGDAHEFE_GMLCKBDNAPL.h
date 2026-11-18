#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NAEFGDAHEFE_GMLCKBDNAPL_FGKEHLIFOON_OFFSET UNITYSDK_OFFSET(0xE54DAF0)
#define NAEFGDAHEFE_GMLCKBDNAPL__CTOR_OFFSET UNITYSDK_OFFSET(0xE54DAE0)

inline static constexpr unsigned int NAEFGDAHEFE_GMLCKBDNAPL_TypeDefinitionIndex = 81792;

class NAEFGDAHEFE_GMLCKBDNAPL : public ::System::Object
{
public:
	::System::Action* GHPPJLNBNBH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEFGDAHEFE_GMLCKBDNAPL__CTOR_OFFSET))(this);
	}

	::System::Void FGKEHLIFOON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEFGDAHEFE_GMLCKBDNAPL_FGKEHLIFOON_OFFSET))(this);
	}
};

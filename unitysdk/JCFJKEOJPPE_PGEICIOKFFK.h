#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JCFJKEOJPPE_PGEICIOKFFK_FJJEBPOKFKJ_OFFSET UNITYSDK_OFFSET(0x198A0560)
#define JCFJKEOJPPE_PGEICIOKFFK__CTOR_OFFSET UNITYSDK_OFFSET(0x198A0550)

inline static constexpr unsigned int JCFJKEOJPPE_PGEICIOKFFK_TypeDefinitionIndex = 47003;

class JCFJKEOJPPE_PGEICIOKFFK : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_PGEICIOKFFK__CTOR_OFFSET))(this);
	}

	::System::Void FJJEBPOKFKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_PGEICIOKFFK_FJJEBPOKFKJ_OFFSET))(this);
	}
};

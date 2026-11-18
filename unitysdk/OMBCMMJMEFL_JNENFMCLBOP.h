#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMJKEPAMDBD;
class PNJDGHBEMLK;

#define OMBCMMJMEFL_JNENFMCLBOP_JEPFHANCAFG_OFFSET UNITYSDK_OFFSET(0x16C1DA70)
#define OMBCMMJMEFL_JNENFMCLBOP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1DA60)

inline static constexpr unsigned int OMBCMMJMEFL_JNENFMCLBOP_TypeDefinitionIndex = 75134;

class OMBCMMJMEFL_JNENFMCLBOP : public ::System::Object
{
public:
	::PNJDGHBEMLK* CDKCJAKODPN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBCMMJMEFL_JNENFMCLBOP__CTOR_OFFSET))(this);
	}

	::BMJKEPAMDBD* JEPFHANCAFG()
	{
		return ((::BMJKEPAMDBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBCMMJMEFL_JNENFMCLBOP_JEPFHANCAFG_OFFSET))(this);
	}
};

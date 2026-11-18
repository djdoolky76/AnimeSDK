#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNFLMKFKKOK.h"

class AFMMAIKKACF;
class GAJCDFLMFBN;

#define FEIGPMHFGKC_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x14AC3520)
#define FEIGPMHFGKC_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x14AC3760)
#define FEIGPMHFGKC__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC3460)

inline static constexpr unsigned int FEIGPMHFGKC_TypeDefinitionIndex = 66851;

class FEIGPMHFGKC : public ::FNFLMKFKKOK
{
public:
	::System::Void _ctor(::GAJCDFLMFBN* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::GAJCDFLMFBN*))((::PBYTE)hIl2Cpp + FEIGPMHFGKC__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + FEIGPMHFGKC_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + FEIGPMHFGKC_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};

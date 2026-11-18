#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNFLMKFKKOK.h"

class AFMMAIKKACF;
class GAJCDFLMFBN;

#define FBCPDNEJCNM_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1169FB70)
#define FBCPDNEJCNM_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1169FBC0)
#define FBCPDNEJCNM__CTOR_OFFSET UNITYSDK_OFFSET(0x1169FAB0)

inline static constexpr unsigned int FBCPDNEJCNM_TypeDefinitionIndex = 66324;

class FBCPDNEJCNM : public ::FNFLMKFKKOK
{
public:
	::System::Void _ctor(::GAJCDFLMFBN* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::GAJCDFLMFBN*))((::PBYTE)hIl2Cpp + FBCPDNEJCNM__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + FBCPDNEJCNM_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + FBCPDNEJCNM_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};

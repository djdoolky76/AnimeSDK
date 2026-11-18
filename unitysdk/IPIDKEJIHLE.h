#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBDELDCBAAB.h"

class AFMMAIKKACF;
class GAJCDFLMFBN;

#define IPIDKEJIHLE_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x18717060)
#define IPIDKEJIHLE_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x187170D0)
#define IPIDKEJIHLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18716FA0)

inline static constexpr unsigned int IPIDKEJIHLE_TypeDefinitionIndex = 88390;

class IPIDKEJIHLE : public ::GBDELDCBAAB
{
public:
	::System::Void _ctor(::GAJCDFLMFBN* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::GAJCDFLMFBN*))((::PBYTE)hIl2Cpp + IPIDKEJIHLE__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + IPIDKEJIHLE_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + IPIDKEJIHLE_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};

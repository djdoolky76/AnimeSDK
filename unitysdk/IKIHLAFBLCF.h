#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKEAICMIBPL.h"

class KDAMKPJPCME;
class PMFINBMNPCK;

#define IKIHLAFBLCF_BLCJPOBBJPK_OFFSET UNITYSDK_OFFSET(0x13357280)
#define IKIHLAFBLCF_CJBCHJLHELG_OFFSET UNITYSDK_OFFSET(0x13356DD0)
#define IKIHLAFBLCF__CTOR_OFFSET UNITYSDK_OFFSET(0x13356D90)

inline static constexpr unsigned int IKIHLAFBLCF_TypeDefinitionIndex = 94701;

class IKIHLAFBLCF : public ::MKEAICMIBPL
{
public:
	::PMFINBMNPCK* JFKHHPPLCLA; // 0x30

	::System::Void _ctor(::KDAMKPJPCME* JLLAMEIACCM)
	{
		return ((::System::Void(*)(::PVOID, ::KDAMKPJPCME*))((::PBYTE)hIl2Cpp + IKIHLAFBLCF__CTOR_OFFSET))(this, JLLAMEIACCM);
	}

	::System::Void CJBCHJLHELG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKIHLAFBLCF_CJBCHJLHELG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BLCJPOBBJPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIHLAFBLCF_BLCJPOBBJPK_OFFSET))(this);
	}
};

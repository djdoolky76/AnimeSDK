#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKEAICMIBPL.h"

class KDAMKPJPCME;

#define KGCNFIAHLCI_CJBCHJLHELG_OFFSET UNITYSDK_OFFSET(0x1E8BBB00)
#define KGCNFIAHLCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B2240)

inline static constexpr unsigned int KGCNFIAHLCI_TypeDefinitionIndex = 94743;

class KGCNFIAHLCI : public ::MKEAICMIBPL
{
public:
	::System::UInt64 AFKGODNDGDI; // 0x30

	::System::Void _ctor(::KDAMKPJPCME* JLLAMEIACCM)
	{
		return ((::System::Void(*)(::PVOID, ::KDAMKPJPCME*))((::PBYTE)hIl2Cpp + KGCNFIAHLCI__CTOR_OFFSET))(this, JLLAMEIACCM);
	}

	::System::Void CJBCHJLHELG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGCNFIAHLCI_CJBCHJLHELG_OFFSET))(this, PMNLNNGEIFM);
	}
};

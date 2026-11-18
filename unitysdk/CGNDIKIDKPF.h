#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHBHEFCAKFD.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

#define CGNDIKIDKPF_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x139C5C40)
#define CGNDIKIDKPF_GBGKLBGIGFA_OFFSET UNITYSDK_OFFSET(0x139C5D00)
#define CGNDIKIDKPF_HBFLPBOAKBA_OFFSET UNITYSDK_OFFSET(0x139C5490)
#define CGNDIKIDKPF_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x139C57E0)
#define CGNDIKIDKPF__CTOR_OFFSET UNITYSDK_OFFSET(0x139C5C30)

inline static constexpr unsigned int CGNDIKIDKPF_TypeDefinitionIndex = 67288;

class CGNDIKIDKPF : public ::JHBHEFCAKFD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNDIKIDKPF__CTOR_OFFSET))(this);
	}

	::MoleMole::UICameraAtom HBFLPBOAKBA(::MoleMole::UICameraAtom KLMGIJEJJFK)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CGNDIKIDKPF_HBFLPBOAKBA_OFFSET))(this, KLMGIJEJJFK);
	}

	::System::Boolean PLPONJAKNEB(::System::Single PMNLNNGEIFM, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CGNDIKIDKPF_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM, AIGOOKNCCNH);
	}

	::System::Boolean BKJPMPBEHDO(::System::Single MIALFKCCCPI, ::MoleMole::UICameraAtom KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CGNDIKIDKPF_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::MoleMole::UICameraAtom GBGKLBGIGFA(::MoleMole::UICameraAtom MIALFKCCCPI)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CGNDIKIDKPF_GBGKLBGIGFA_OFFSET))(this, MIALFKCCCPI);
	}
};

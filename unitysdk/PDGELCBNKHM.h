#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHLJFPECEGH.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

#define PDGELCBNKHM_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x160042C0)
#define PDGELCBNKHM__CTOR_OFFSET UNITYSDK_OFFSET(0x160043D0)

inline static constexpr unsigned int PDGELCBNKHM_TypeDefinitionIndex = 39765;

class PDGELCBNKHM : public ::KHLJFPECEGH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGELCBNKHM__CTOR_OFFSET))(this);
	}

	::System::Boolean PLPONJAKNEB(::System::Single PMNLNNGEIFM, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + PDGELCBNKHM_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM, AIGOOKNCCNH);
	}
};

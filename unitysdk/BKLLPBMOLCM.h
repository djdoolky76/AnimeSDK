#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class BLOKDPHNBFL;
class CJIEIHEDMME;

#define BKLLPBMOLCM_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x16926C90)
#define BKLLPBMOLCM_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x16926C40)
#define BKLLPBMOLCM__CTOR_OFFSET UNITYSDK_OFFSET(0x16926BD0)

inline static constexpr unsigned int BKLLPBMOLCM_TypeDefinitionIndex = 90112;

class BKLLPBMOLCM : public ::JHCLHGCLLBF
{
public:
	::BLOKDPHNBFL* LADPIPOMBJM; // 0x18

	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + BKLLPBMOLCM__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLLPBMOLCM_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLLPBMOLCM_GKCLAFJFBNF_OFFSET))(this);
	}
};

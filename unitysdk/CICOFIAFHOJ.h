#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBNLAFDKEOH.h"

class EIJNABNFPJJ;

#define CICOFIAFHOJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1479FDE0)
#define CICOFIAFHOJ_NOLNLGKADNH_OFFSET UNITYSDK_OFFSET(0x147A0000)
#define CICOFIAFHOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1479FDD0)

inline static constexpr unsigned int CICOFIAFHOJ_TypeDefinitionIndex = 55721;

class CICOFIAFHOJ : public ::GBNLAFDKEOH
{
public:
	::System::Void _ctor(::EIJNABNFPJJ* ALLCJOCNFLI)
	{
		return ((::System::Void(*)(::PVOID, ::EIJNABNFPJJ*))((::PBYTE)hIl2Cpp + CICOFIAFHOJ__CTOR_OFFSET))(this, ALLCJOCNFLI);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICOFIAFHOJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void NOLNLGKADNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICOFIAFHOJ_NOLNLGKADNH_OFFSET))(this);
	}
};

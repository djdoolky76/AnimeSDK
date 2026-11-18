#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define NPOBAOMMOGF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xB2F77E0)
#define NPOBAOMMOGF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xB2F76A0)
#define NPOBAOMMOGF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xB2F74E0)
#define NPOBAOMMOGF__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F77D0)

inline static constexpr unsigned int NPOBAOMMOGF_TypeDefinitionIndex = 69507;

class NPOBAOMMOGF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::LGINJIKKBJA* GKONPPJGCCB; // 0x20
	::FGCOIBFFCHB* BKDGGCFMIPD; // 0x28
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOBAOMMOGF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPOBAOMMOGF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOBAOMMOGF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPOBAOMMOGF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define NFMOHHFAOHO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18FB6150)
#define NFMOHHFAOHO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18FB6080)
#define NFMOHHFAOHO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18FB5EA0)
#define NFMOHHFAOHO__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB6140)

inline static constexpr unsigned int NFMOHHFAOHO_TypeDefinitionIndex = 39114;

class NFMOHHFAOHO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x20
	::LGINJIKKBJA* OMFDKIIPGHM; // 0x28
	::MoleMole::UIGeneralButtonController* KOCHFIGCEFE; // 0x30
	::LGINJIKKBJA* OJPAODAIOFE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMOHHFAOHO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFMOHHFAOHO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMOHHFAOHO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFMOHHFAOHO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

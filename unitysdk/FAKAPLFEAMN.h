#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define FAKAPLFEAMN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E3F900)
#define FAKAPLFEAMN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E3F850)
#define FAKAPLFEAMN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E3F670)
#define FAKAPLFEAMN__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3F8F0)

inline static constexpr unsigned int FAKAPLFEAMN_TypeDefinitionIndex = 81448;

class FAKAPLFEAMN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x20
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x28
	::MoleMole::UIGeneralButtonController* OPFFCJBBGFP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKAPLFEAMN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAKAPLFEAMN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKAPLFEAMN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAKAPLFEAMN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

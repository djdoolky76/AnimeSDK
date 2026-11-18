#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define LNLBJLKIGGD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E0D0F0)
#define LNLBJLKIGGD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E0D040)
#define LNLBJLKIGGD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E0CEC0)
#define LNLBJLKIGGD__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0D0E0)

inline static constexpr unsigned int LNLBJLKIGGD_TypeDefinitionIndex = 92806;

class LNLBJLKIGGD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* GKONPPJGCCB; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLBJLKIGGD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNLBJLKIGGD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLBJLKIGGD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNLBJLKIGGD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

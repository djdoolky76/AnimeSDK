#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPHPFDEODIG.h"

class GIBMJLOJLKD;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define LKNCALOLJCD_ALNBCIBAMKC_OFFSET UNITYSDK_OFFSET(0x1A6136C0)
#define LKNCALOLJCD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A6136E0)
#define LKNCALOLJCD_CFFPODGBJCE_OFFSET UNITYSDK_OFFSET(0x1A6136D0)
#define LKNCALOLJCD_CLEAN_OFFSET UNITYSDK_OFFSET(0x1A613620)
#define LKNCALOLJCD_LJHGKCDNBPI_OFFSET UNITYSDK_OFFSET(0x1A6137A0)
#define LKNCALOLJCD_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x1A6137B0)
#define LKNCALOLJCD_MLKGOCEKKBC_OFFSET UNITYSDK_OFFSET(0x1A6136B0)
#define LKNCALOLJCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6136A0)

inline static constexpr unsigned int LKNCALOLJCD_TypeDefinitionIndex = 59984;

class LKNCALOLJCD : public ::MPHPFDEODIG
{
public:
	::HNLACBJDCGI* _NLPDJDGCCCM_k__BackingField; // 0x20
	::MoleMole::UIControlCollection* _NHFCFKIJBPE_k__BackingField; // 0x28
	::GIBMJLOJLKD* OHJOJMMNAFK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNCALOLJCD__CTOR_OFFSET))(this);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNCALOLJCD_CLEAN_OFFSET))(this);
	}

	::MoleMole::UIControlCollection* MLKGOCEKKBC()
	{
		return ((::MoleMole::UIControlCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNCALOLJCD_MLKGOCEKKBC_OFFSET))(this);
	}

	::System::Void ALNBCIBAMKC(::HNLACBJDCGI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + LKNCALOLJCD_ALNBCIBAMKC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CFFPODGBJCE(::MoleMole::UIControlCollection* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKNCALOLJCD_CFFPODGBJCE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBOMJDBNHIC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKNCALOLJCD_BBOMJDBNHIC_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::HNLACBJDCGI* LJHGKCDNBPI()
	{
		return ((::HNLACBJDCGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNCALOLJCD_LJHGKCDNBPI_OFFSET))(this);
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKNCALOLJCD_LJNFANAEHHA_OFFSET))(this);
	}
};

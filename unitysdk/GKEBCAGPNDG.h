#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define GKEBCAGPNDG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x125D54E0)
#define GKEBCAGPNDG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x125D5450)
#define GKEBCAGPNDG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x125D52D0)
#define GKEBCAGPNDG__CTOR_OFFSET UNITYSDK_OFFSET(0x125D54D0)

inline static constexpr unsigned int GKEBCAGPNDG_TypeDefinitionIndex = 66407;

class GKEBCAGPNDG : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* EHMLMJKEJMM; // 0x18
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEBCAGPNDG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKEBCAGPNDG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKEBCAGPNDG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEBCAGPNDG_KGEBDLGBGNM_OFFSET))(this);
	}
};

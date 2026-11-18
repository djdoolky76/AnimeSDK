#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define EPIIFBNGANI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1237F490)
#define EPIIFBNGANI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1237F390)
#define EPIIFBNGANI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1237F1D0)
#define EPIIFBNGANI__CTOR_OFFSET UNITYSDK_OFFSET(0x1237F480)

inline static constexpr unsigned int EPIIFBNGANI_TypeDefinitionIndex = 51351;

class EPIIFBNGANI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::FGCOIBFFCHB* DDJAJDBHKNM; // 0x20
	::FGCOIBFFCHB* NFCIPDGCFLP; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIIFBNGANI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPIIFBNGANI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIIFBNGANI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPIIFBNGANI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

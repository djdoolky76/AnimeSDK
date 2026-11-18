#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define EMDJONLENPA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169B2870)
#define EMDJONLENPA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169B27A0)
#define EMDJONLENPA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169B2600)
#define EMDJONLENPA__CTOR_OFFSET UNITYSDK_OFFSET(0x169B2860)

inline static constexpr unsigned int EMDJONLENPA_TypeDefinitionIndex = 70019;

class EMDJONLENPA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HELAMPHDBEH; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::FGCOIBFFCHB* EJBFBIFABFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDJONLENPA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMDJONLENPA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDJONLENPA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMDJONLENPA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

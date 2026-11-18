#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define JBEMHMHIDCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x130667A0)
#define JBEMHMHIDCM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13066660)
#define JBEMHMHIDCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13066470)
#define JBEMHMHIDCM__CTOR_OFFSET UNITYSDK_OFFSET(0x13066790)

inline static constexpr unsigned int JBEMHMHIDCM_TypeDefinitionIndex = 49020;

class JBEMHMHIDCM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* GIJEJBMJOAE; // 0x18
	::FGCOIBFFCHB* NAPLKGBCHJF; // 0x20
	::FGCOIBFFCHB* HHODDKPNLAO; // 0x28
	::FGCOIBFFCHB* GBNKHHDFCHG; // 0x30
	::FGCOIBFFCHB* EMNMNNLFKHF; // 0x38
	::FGCOIBFFCHB* LFLHFFKDMAN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEMHMHIDCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBEMHMHIDCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEMHMHIDCM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBEMHMHIDCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define DNPGENDOGLF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1060B660)
#define DNPGENDOGLF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1060B520)
#define DNPGENDOGLF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1060B380)
#define DNPGENDOGLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1060B650)

inline static constexpr unsigned int DNPGENDOGLF_TypeDefinitionIndex = 81602;

class DNPGENDOGLF : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* OIOPLFJILDA; // 0x18
	::LGINJIKKBJA* KDLNMKIAGAJ; // 0x20
	::LGINJIKKBJA* KOLCHGKNGFM; // 0x28
	::LGINJIKKBJA* KOMIELKMHIC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPGENDOGLF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNPGENDOGLF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNPGENDOGLF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPGENDOGLF_KGEBDLGBGNM_OFFSET))(this);
	}
};

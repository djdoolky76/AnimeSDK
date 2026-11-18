#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }

#define MNHOGMBHCPO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18B5AF90)
#define MNHOGMBHCPO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18B5AF00)
#define MNHOGMBHCPO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18B5ADB0)
#define MNHOGMBHCPO__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5AF80)

inline static constexpr unsigned int MNHOGMBHCPO_TypeDefinitionIndex = 56005;

class MNHOGMBHCPO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::MoleMole::MonoInputKey* DFPJEEDDKMG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHOGMBHCPO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNHOGMBHCPO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNHOGMBHCPO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHOGMBHCPO_KGEBDLGBGNM_OFFSET))(this);
	}
};

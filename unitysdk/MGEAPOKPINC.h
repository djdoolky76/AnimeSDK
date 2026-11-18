#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define MGEAPOKPINC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x151CDAD0)
#define MGEAPOKPINC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x151CDA00)
#define MGEAPOKPINC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x151CD880)
#define MGEAPOKPINC__CTOR_OFFSET UNITYSDK_OFFSET(0x151CDAC0)

inline static constexpr unsigned int MGEAPOKPINC_TypeDefinitionIndex = 75068;

class MGEAPOKPINC : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadModule* FIKGLDKAAPN; // 0x18
	::LGINJIKKBJA* NIACMHILDKA; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::MoleMole::MonoGamepadModule* GNOJGANMLCF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPOKPINC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGEAPOKPINC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPOKPINC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGEAPOKPINC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define BLGLHJFKLKL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1857BD30)
#define BLGLHJFKLKL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1857BC40)
#define BLGLHJFKLKL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1857BAA0)
#define BLGLHJFKLKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1857BD20)

inline static constexpr unsigned int BLGLHJFKLKL_TypeDefinitionIndex = 91629;

class BLGLHJFKLKL : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadModule* FIKGLDKAAPN; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::MoleMole::MonoGamepadModule* FKGJHEBFGND; // 0x28
	::LGINJIKKBJA* NIACMHILDKA; // 0x30
	::LGINJIKKBJA* JPGNIEGIIDO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGLHJFKLKL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLGLHJFKLKL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLGLHJFKLKL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGLHJFKLKL_KGEBDLGBGNM_OFFSET))(this);
	}
};

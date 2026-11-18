#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define PICINGFBANC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A7F3EB0)
#define PICINGFBANC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A7F3DE0)
#define PICINGFBANC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A7F3C60)
#define PICINGFBANC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F3EA0)

inline static constexpr unsigned int PICINGFBANC_TypeDefinitionIndex = 64677;

class PICINGFBANC : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* BAPGIBLMHPJ; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::MoleMole::UIGeneralButtonController* KLELCFLGMEB; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICINGFBANC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PICINGFBANC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PICINGFBANC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICINGFBANC_KGEBDLGBGNM_OFFSET))(this);
	}
};

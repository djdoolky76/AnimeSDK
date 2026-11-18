#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define FKBFOAKFGAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB49EF0)
#define FKBFOAKFGAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xBB49E60)
#define FKBFOAKFGAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB49CE0)
#define FKBFOAKFGAN__CTOR_OFFSET UNITYSDK_OFFSET(0xBB49EE0)

inline static constexpr unsigned int FKBFOAKFGAN_TypeDefinitionIndex = 61453;

class FKBFOAKFGAN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HODPPKHAJAG; // 0x18
	::GCIMMDDIFBJ* ELDILOKLCBM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBFOAKFGAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FKBFOAKFGAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBFOAKFGAN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FKBFOAKFGAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

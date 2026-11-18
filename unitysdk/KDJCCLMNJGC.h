#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define KDJCCLMNJGC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1860AB90)
#define KDJCCLMNJGC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1860AAA0)
#define KDJCCLMNJGC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1860A930)
#define KDJCCLMNJGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1860AB80)

inline static constexpr unsigned int KDJCCLMNJGC_TypeDefinitionIndex = 73173;

class KDJCCLMNJGC : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadModule* JFBHCKFOIAH; // 0x18
	::LGINJIKKBJA* KDLNMKIAGAJ; // 0x20
	::LGINJIKKBJA* KOMIELKMHIC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCCLMNJGC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDJCCLMNJGC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDJCCLMNJGC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCCLMNJGC_KGEBDLGBGNM_OFFSET))(this);
	}
};

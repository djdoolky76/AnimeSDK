#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define HIHMLGJJAAJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B01160)
#define HIHMLGJJAAJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B01090)
#define HIHMLGJJAAJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B00EB0)
#define HIHMLGJJAAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17B01150)

inline static constexpr unsigned int HIHMLGJJAAJ_TypeDefinitionIndex = 67162;

class HIHMLGJJAAJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x18
	::MoleMole::MonoGamepadModule* BAFMBJIFLKM; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x30
	::MonoUITableScrollV2* FIFKONNOFDL; // 0x38
	::MonoUITableScrollV2* MKCGFJAONBB; // 0x40
	::MoleMole::MonoGamepadModule* PHCBEBFAOCG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHMLGJJAAJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HIHMLGJJAAJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHMLGJJAAJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HIHMLGJJAAJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

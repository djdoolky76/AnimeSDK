#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define IJAIGGEKBDP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1987C3D0)
#define IJAIGGEKBDP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1987C320)
#define IJAIGGEKBDP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1987C1A0)
#define IJAIGGEKBDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1987C3C0)

inline static constexpr unsigned int IJAIGGEKBDP_TypeDefinitionIndex = 62547;

class IJAIGGEKBDP : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BJMKOLMEPHI; // 0x18
	::FGCOIBFFCHB* FBNLJFAIEHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAIGGEKBDP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJAIGGEKBDP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJAIGGEKBDP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAIGGEKBDP_KGEBDLGBGNM_OFFSET))(this);
	}
};

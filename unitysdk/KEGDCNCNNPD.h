#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define KEGDCNCNNPD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16338EE0)
#define KEGDCNCNNPD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16338E30)
#define KEGDCNCNNPD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16338C90)
#define KEGDCNCNNPD__CTOR_OFFSET UNITYSDK_OFFSET(0x16338ED0)

inline static constexpr unsigned int KEGDCNCNNPD_TypeDefinitionIndex = 81442;

class KEGDCNCNNPD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::FGCOIBFFCHB* IAOCBIHABLH; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGDCNCNNPD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEGDCNCNNPD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEGDCNCNNPD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGDCNCNNPD_KGEBDLGBGNM_OFFSET))(this);
	}
};

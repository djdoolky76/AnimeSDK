#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define BBMOMDBGGMB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x113D29E0)
#define BBMOMDBGGMB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x113D2910)
#define BBMOMDBGGMB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x113D27C0)
#define BBMOMDBGGMB__CTOR_OFFSET UNITYSDK_OFFSET(0x113D29D0)

inline static constexpr unsigned int BBMOMDBGGMB_TypeDefinitionIndex = 87803;

class BBMOMDBGGMB : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* MKDMBACNKOK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMOMDBGGMB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBMOMDBGGMB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBMOMDBGGMB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMOMDBGGMB_KGEBDLGBGNM_OFFSET))(this);
	}
};

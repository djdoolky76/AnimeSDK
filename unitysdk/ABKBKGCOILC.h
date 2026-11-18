#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define ABKBKGCOILC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12CD3510)
#define ABKBKGCOILC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12CD3420)
#define ABKBKGCOILC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12CD3290)
#define ABKBKGCOILC__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD3500)

inline static constexpr unsigned int ABKBKGCOILC_TypeDefinitionIndex = 91298;

class ABKBKGCOILC : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::RectTransform* MBKACMJJMBH; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKBKGCOILC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABKBKGCOILC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKBKGCOILC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABKBKGCOILC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

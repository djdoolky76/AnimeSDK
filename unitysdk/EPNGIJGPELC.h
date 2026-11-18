#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define EPNGIJGPELC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9EC230)
#define EPNGIJGPELC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF9EC1A0)
#define EPNGIJGPELC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9EC050)
#define EPNGIJGPELC__CTOR_OFFSET UNITYSDK_OFFSET(0xF9EC220)

inline static constexpr unsigned int EPNGIJGPELC_TypeDefinitionIndex = 53098;

class EPNGIJGPELC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* EDBKEMDEIMJ; // 0x18
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNGIJGPELC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPNGIJGPELC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNGIJGPELC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPNGIJGPELC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

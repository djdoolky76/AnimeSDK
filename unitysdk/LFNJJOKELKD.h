#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LFNJJOKELKD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12A3E160)
#define LFNJJOKELKD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12A3E0D0)
#define LFNJJOKELKD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12A3DF30)
#define LFNJJOKELKD__CTOR_OFFSET UNITYSDK_OFFSET(0x12A3E150)

inline static constexpr unsigned int LFNJJOKELKD_TypeDefinitionIndex = 71062;

class LFNJJOKELKD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::UnityEngine::RectTransform* AINMDOLOENJ; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::UnityEngine::RectTransform* OPKBABPNDDJ; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GANCEGMMNMB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNJJOKELKD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFNJJOKELKD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNJJOKELKD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFNJJOKELKD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

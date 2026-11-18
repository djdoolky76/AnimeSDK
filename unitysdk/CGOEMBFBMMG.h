#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CGOEMBFBMMG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1532FDA0)
#define CGOEMBFBMMG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1532FCF0)
#define CGOEMBFBMMG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1532FAF0)
#define CGOEMBFBMMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1532FD90)

inline static constexpr unsigned int CGOEMBFBMMG_TypeDefinitionIndex = 62056;

class CGOEMBFBMMG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x18
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x20
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x28
	::LGINJIKKBJA* NCGGNMHOCLF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::UnityEngine::RectTransform* HHDIIMCDADD; // 0x40
	::FGCOIBFFCHB* HMHPLOLDMFN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOEMBFBMMG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGOEMBFBMMG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGOEMBFBMMG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOEMBFBMMG_KGEBDLGBGNM_OFFSET))(this);
	}
};

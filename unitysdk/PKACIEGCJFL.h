#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PKACIEGCJFL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C1D95D0)
#define PKACIEGCJFL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C1D94C0)
#define PKACIEGCJFL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C1D9230)
#define PKACIEGCJFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D95C0)

inline static constexpr unsigned int PKACIEGCJFL_TypeDefinitionIndex = 48683;

class PKACIEGCJFL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KCHMKNCCCOL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* CDANIJLAOMD; // 0x20
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IOLDMAMNELE; // 0x38
	::UnityEngine::RectTransform* POOFBHFFBLG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HMLLANECGKG; // 0x48
	::UnityEngine::RectTransform* PLNMOAEALJH; // 0x50
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x58
	::UnityEngine::RectTransform* PHLFPGLGGPL; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* KLHNCBGCEHI; // 0x68
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x70
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKACIEGCJFL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKACIEGCJFL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKACIEGCJFL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKACIEGCJFL_KGEBDLGBGNM_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BCPPBIPCFAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D1A2F0)
#define BCPPBIPCFAP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D1A1F0)
#define BCPPBIPCFAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D19F70)
#define BCPPBIPCFAP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D1A2E0)

inline static constexpr unsigned int BCPPBIPCFAP_TypeDefinitionIndex = 42508;

class BCPPBIPCFAP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NPOLKKPLIMG; // 0x18
	::UnityEngine::RectTransform* LBMPDPJKNJH; // 0x20
	::UnityEngine::RectTransform* LLNLKIKBBMF; // 0x28
	::FGCOIBFFCHB* JIDHNNNOELO; // 0x30
	::UnityEngine::RectTransform* CEBLEDNKMDJ; // 0x38
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BGFHOBEIDKO; // 0x48
	::FGCOIBFFCHB* KPAHJIBJPGI; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* MLPINIOLOBM; // 0x58
	::UnityEngine::RectTransform* NCLKKCJLLEM; // 0x60
	::UnityEngine::RectTransform* OLMPMHLFIKN; // 0x68
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPPBIPCFAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCPPBIPCFAP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPPBIPCFAP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCPPBIPCFAP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

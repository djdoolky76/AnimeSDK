#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KGMBACANDLO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x179090D0)
#define KGMBACANDLO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17908F60)
#define KGMBACANDLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17908CA0)
#define KGMBACANDLO__CTOR_OFFSET UNITYSDK_OFFSET(0x179090C0)

inline static constexpr unsigned int KGMBACANDLO_TypeDefinitionIndex = 60715;

class KGMBACANDLO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PPEAPAAPPLK; // 0x20
	::FGCOIBFFCHB* IKOFJEHPPAN; // 0x28
	::FGCOIBFFCHB* BKDGGCFMIPD; // 0x30
	::FGCOIBFFCHB* MCBLBOLNFPL; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::FGCOIBFFCHB* IEFNLGBNGHJ; // 0x48
	::UnityEngine::GameObject* FCOCNDLFIKE; // 0x50
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x58
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* MGEFFOJJCDH; // 0x68
	::FGCOIBFFCHB* KKOJIGEFPBM; // 0x70
	::UnityEngine::GameObject* HDAELHOLDCI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMBACANDLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGMBACANDLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGMBACANDLO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMBACANDLO_KGEBDLGBGNM_OFFSET))(this);
	}
};

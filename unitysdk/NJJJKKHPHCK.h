#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NJJJKKHPHCK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x114A4310)
#define NJJJKKHPHCK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x114A41D0)
#define NJJJKKHPHCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x114A3F60)
#define NJJJKKHPHCK__CTOR_OFFSET UNITYSDK_OFFSET(0x114A4300)

inline static constexpr unsigned int NJJJKKHPHCK_TypeDefinitionIndex = 46487;

class NJJJKKHPHCK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::UnityEngine::Canvas* DMFEPOIHIDB; // 0x20
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x28
	::FGCOIBFFCHB* KPHNIOEPKIM; // 0x30
	::UnityEngine::RectTransform* BDBBDCOMAFE; // 0x38
	::LGINJIKKBJA* MFEKIGIPFBJ; // 0x40
	::UnityEngine::RectTransform* OCPFFNKLFKP; // 0x48
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x58
	::LGINJIKKBJA* BHICENDACGN; // 0x60
	::FGCOIBFFCHB* HCDCMAONDBP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJJKKHPHCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NJJJKKHPHCK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJJKKHPHCK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NJJJKKHPHCK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

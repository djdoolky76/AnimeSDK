#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PNDABKPGAEI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1199A580)
#define PNDABKPGAEI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1199A460)
#define PNDABKPGAEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1199A180)
#define PNDABKPGAEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1199A570)

inline static constexpr unsigned int PNDABKPGAEI_TypeDefinitionIndex = 78570;

class PNDABKPGAEI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PJLLCFNNMBB; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::LGINJIKKBJA* NOHPELDAHHE; // 0x28
	::UnityEngine::RectTransform* CKPCCDDNOBO; // 0x30
	::UnityEngine::RectTransform* LEDCIOGHLJB; // 0x38
	::UnityEngine::RectTransform* AGJKKFJPOPF; // 0x40
	::LGINJIKKBJA* HIKNDOICCPP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HAFNPNLNNPG; // 0x50
	::UnityEngine::GameObject* EJHNNMBHAPK; // 0x58
	::UnityEngine::RectTransform* IIKLFBGGIFN; // 0x60
	::FGCOIBFFCHB* GHLALFIJFPN; // 0x68
	::LGINJIKKBJA* BKDDKDMILCA; // 0x70
	::MonoUITableScrollV2* AFDJNDDFBEA; // 0x78
	::UnityEngine::RectTransform* PGONGHOFBMM; // 0x80
	::FGCOIBFFCHB* PEPHHDLCPDA; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDABKPGAEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNDABKPGAEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNDABKPGAEI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDABKPGAEI_KGEBDLGBGNM_OFFSET))(this);
	}
};

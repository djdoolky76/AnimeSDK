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

#define FANKNHDIAEA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F52FC0)
#define FANKNHDIAEA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F52EA0)
#define FANKNHDIAEA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F52BE0)
#define FANKNHDIAEA__CTOR_OFFSET UNITYSDK_OFFSET(0x10F52FB0)

inline static constexpr unsigned int FANKNHDIAEA_TypeDefinitionIndex = 52207;

class FANKNHDIAEA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HAFNPNLNNPG; // 0x18
	::UnityEngine::RectTransform* KIFGJEEEDBN; // 0x20
	::UnityEngine::RectTransform* LEDCIOGHLJB; // 0x28
	::LGINJIKKBJA* BKDDKDMILCA; // 0x30
	::LGINJIKKBJA* NOHPELDAHHE; // 0x38
	::FGCOIBFFCHB* PEPHHDLCPDA; // 0x40
	::LGINJIKKBJA* HIKNDOICCPP; // 0x48
	::FGCOIBFFCHB* GHLALFIJFPN; // 0x50
	::UnityEngine::RectTransform* PJLLCFNNMBB; // 0x58
	::MonoUITableScrollV2* AFDJNDDFBEA; // 0x60
	::UnityEngine::RectTransform* BENLPCIAHAL; // 0x68
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x70
	::UnityEngine::RectTransform* MLGEMMDLCJP; // 0x78
	::UnityEngine::GameObject* EJHNNMBHAPK; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANKNHDIAEA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FANKNHDIAEA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FANKNHDIAEA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANKNHDIAEA_KGEBDLGBGNM_OFFSET))(this);
	}
};

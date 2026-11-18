#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBottomRewardInfoWidgetController; }
namespace MoleMole { class UIGeneralItemBtnWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define COBPOPMIGLF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1C29A0)
#define COBPOPMIGLF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1C2830)
#define COBPOPMIGLF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1C24C0)
#define COBPOPMIGLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C2990)

inline static constexpr unsigned int COBPOPMIGLF_TypeDefinitionIndex = 70588;

class COBPOPMIGLF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* JKDHPEBMIOH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HGLGDOHOHIC; // 0x20
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HMOFHFPJLHE; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIGeneralBottomRewardInfoWidgetController*>* ONBNGDLNOMP; // 0x38
	::LGINJIKKBJA* BAPGIBLMHPJ; // 0x40
	::FGCOIBFFCHB* BPJFFMMDMJF; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x50
	::LGINJIKKBJA* DDLILIHKOMG; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* KBGIAIHCEPL; // 0x60
	::MEKABAIJMNM_1<::MoleMole::UIGeneralItemBtnWidgetController*>* MHAHOMEDOEC; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x70
	::UnityEngine::RectTransform* GMABNNKNIIF; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* NFADPLHLMOJ; // 0x80
	::MoleMole::MonoGamepadNavigatableList* LICGEIIBOGL; // 0x88
	::LGINJIKKBJA* AHNKDCNFAFJ; // 0x90
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBPOPMIGLF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COBPOPMIGLF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COBPOPMIGLF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBPOPMIGLF_KGEBDLGBGNM_OFFSET))(this);
	}
};

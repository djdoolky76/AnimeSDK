#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GKLJNFIGLON_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15D73AD0)
#define GKLJNFIGLON_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15D739D0)
#define GKLJNFIGLON_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15D73730)
#define GKLJNFIGLON__CTOR_OFFSET UNITYSDK_OFFSET(0x15D73AC0)

inline static constexpr unsigned int GKLJNFIGLON_TypeDefinitionIndex = 67603;

class GKLJNFIGLON : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* MPNPOHOFACA; // 0x18
	::LGINJIKKBJA* HEOACLIFDNO; // 0x20
	::FGCOIBFFCHB* EHPMFMLAKLF; // 0x28
	::MoleMole::MonoGamepadNavigatableList* HMIBLBNACMC; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DOHBFOPMFHN; // 0x38
	::UnityEngine::RectTransform* HGKANNMDNMI; // 0x40
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x50
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* LIOOALHJEBO; // 0x68
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x70
	::UnityEngine::RectTransform* HGMNLNMGBBG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJNFIGLON__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKLJNFIGLON_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJNFIGLON_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKLJNFIGLON_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

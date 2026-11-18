#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LIGHKHBECDM_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1A60CBF0)
#define LIGHKHBECDM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A60CB00)
#define LIGHKHBECDM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A60C840)
#define LIGHKHBECDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60D1F0)

inline static constexpr unsigned int LIGHKHBECDM_TypeDefinitionIndex = 60662;

class LIGHKHBECDM : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x28
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x30
	::FGCOIBFFCHB* GFLLOLEMLIL; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::LGINJIKKBJA* PDACHPLBKIE; // 0x48
	::FGCOIBFFCHB* EGCFNMKJDAI; // 0x50
	::UnityEngine::RectTransform* ADLIAPBONOP; // 0x58
	::UnityEngine::RectTransform* KPKIHOKJHGP; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* HPECOCEHFBO; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* OAKAIIJLMIL; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* MFKBCHAJOGK; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* PBIHKIHCFAO; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* EKGCNEJNDJN; // 0x88
	::FGCOIBFFCHB* KACDILMNKEE; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHKHBECDM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LIGHKHBECDM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHKHBECDM_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHKHBECDM_KGEBDLGBGNM_OFFSET))(this);
	}
};

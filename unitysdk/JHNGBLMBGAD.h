#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JHNGBLMBGAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13085170)
#define JHNGBLMBGAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13085010)
#define JHNGBLMBGAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13084CB0)
#define JHNGBLMBGAD__CTOR_OFFSET UNITYSDK_OFFSET(0x13085160)

inline static constexpr unsigned int JHNGBLMBGAD_TypeDefinitionIndex = 53288;

class JHNGBLMBGAD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* LILIJPJIHFF; // 0x18
	::UnityEngine::Transform* BFOFHNMBKJJ; // 0x20
	::MoleMole::MonoGamepadCustomList* PPNBEJECLGO; // 0x28
	::UnityEngine::GameObject* PGGOKPPAIJA; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::MoleMole::MonoGamepadCustomList* AMDKOFGOCAI; // 0x40
	::UnityEngine::Transform* ODALDIOFMPH; // 0x48
	::UnityEngine::GameObject* MCOEBBJIGIB; // 0x50
	::UnityEngine::Transform* OJIELFLGDDA; // 0x58
	::UnityEngine::Transform* PNKBOLJOOLM; // 0x60
	::UnityEngine::Animation* KDOFOMOEMFH; // 0x68
	::LGINJIKKBJA* CHAMBKDGKFB; // 0x70
	::UnityEngine::RectTransform* LKCPFCFFILO; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* AJHAGPKPDGN; // 0x80
	::UnityEngine::UI::Text* DBDENFPPKMO; // 0x88
	::LGINJIKKBJA* KGPBAPEINKN; // 0x90
	::FGCOIBFFCHB* CPNJKFNFMEN; // 0x98
	::UnityEngine::GameObject* ANDFIBAKEAE; // 0xA0
	::LGINJIKKBJA* DAOIHCKDHOI; // 0xA8
	::UnityEngine::UI::Extension::UILocalizationText* JBKCMBJINPO; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNGBLMBGAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHNGBLMBGAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNGBLMBGAD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHNGBLMBGAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

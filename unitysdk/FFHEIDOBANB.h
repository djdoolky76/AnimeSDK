#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInputFieldEx; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FFHEIDOBANB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AC5230)
#define FFHEIDOBANB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14AC50D0)
#define FFHEIDOBANB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AC4D90)
#define FFHEIDOBANB__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC5220)

inline static constexpr unsigned int FFHEIDOBANB_TypeDefinitionIndex = 57529;

class FFHEIDOBANB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CPGNEPMDANH; // 0x18
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x20
	::UnityEngine::Transform* NLADLFCHHBO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NOFKGPPNOKP; // 0x30
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x38
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x40
	::LGINJIKKBJA* EABFLAKKJJK; // 0x48
	::MoleMole::UIInputFieldEx* NLAKLMGLFCI; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* IOLJIHDIJMI; // 0x58
	::MoleMole::MonoGamepadModule* LEJAIJCGDFG; // 0x60
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x68
	::MoleMole::MonoGamepadModule* CGPHLEICLDC; // 0x70
	::UnityEngine::GameObject* JJKNFHLLNIH; // 0x78
	::UnityEngine::UI::Text* LBLABIHMOFN; // 0x80
	::UnityEngine::UI::Text* DOGHOAKHFHL; // 0x88
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* HMBAEGDOIKA; // 0x98
	::UnityEngine::Transform* MBKACMJJMBH; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* OCFLEGNCFIF; // 0xA8
	::LGINJIKKBJA* MAPJABKIKLD; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHEIDOBANB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFHEIDOBANB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFHEIDOBANB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHEIDOBANB_KGEBDLGBGNM_OFFSET))(this);
	}
};

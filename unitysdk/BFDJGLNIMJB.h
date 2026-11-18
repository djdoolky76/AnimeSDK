#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BFDJGLNIMJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15071110)
#define BFDJGLNIMJB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15070FF0)
#define BFDJGLNIMJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15070D30)
#define BFDJGLNIMJB__CTOR_OFFSET UNITYSDK_OFFSET(0x15071100)

inline static constexpr unsigned int BFDJGLNIMJB_TypeDefinitionIndex = 88169;

class BFDJGLNIMJB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* LENMLFCGBMC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DAKOCINNIJK; // 0x20
	::UnityEngine::GameObject* CMDDNCJJFFO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x30
	::UnityEngine::Transform* JIKEHPNIEBP; // 0x38
	::MonoUITableScrollV2* NMGGGEJPBOC; // 0x40
	::UnityEngine::RectTransform* FJGPOOLCOEP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* DKJHOHJEIEF; // 0x50
	::UnityEngine::RectTransform* NHAHMJOKDNP; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x60
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x68
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x70
	::UnityEngine::RectTransform* IHIGNFCDKAB; // 0x78
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x80
	::MonoUITableScrollV2* OFJOLDGMCCD; // 0x88
	::UnityEngine::GameObject* HFGFMKAKMLM; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDJGLNIMJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFDJGLNIMJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDJGLNIMJB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFDJGLNIMJB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define DLCDHKBHKKM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149B7050)
#define DLCDHKBHKKM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149B6EB0)
#define DLCDHKBHKKM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149B6BC0)
#define DLCDHKBHKKM__CTOR_OFFSET UNITYSDK_OFFSET(0x149B7040)

inline static constexpr unsigned int DLCDHKBHKKM_TypeDefinitionIndex = 62116;

class DLCDHKBHKKM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DNNKEFKIOAG; // 0x18
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x20
	::UnityEngine::GameObject* DCDENHPHFKD; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x30
	::LGINJIKKBJA* CJNBEMOEHCE; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x48
	::LGINJIKKBJA* JGPBKAHIBLG; // 0x50
	::UnityEngine::Transform* BFJEIFHDGCE; // 0x58
	::FGCOIBFFCHB* DBAMBOEFNMD; // 0x60
	::LGINJIKKBJA* CIPLLBJJOJG; // 0x68
	::UnityEngine::UI::Extension::UITabButtonGroup* FBLMLOANCHG; // 0x70
	::LGINJIKKBJA* MAHNABIKKDL; // 0x78
	::UnityEngine::UI::Text* HKKMNDDCKEL; // 0x80
	::MoleMole::MonoGamepadTabButtonGroup* HADHPNLMPEP; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDHKBHKKM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLCDHKBHKKM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLCDHKBHKKM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDHKBHKKM_KGEBDLGBGNM_OFFSET))(this);
	}
};

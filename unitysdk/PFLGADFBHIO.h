#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PFLGADFBHIO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17326400)
#define PFLGADFBHIO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17326350)
#define PFLGADFBHIO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17326080)
#define PFLGADFBHIO__CTOR_OFFSET UNITYSDK_OFFSET(0x173263F0)

inline static constexpr unsigned int PFLGADFBHIO_TypeDefinitionIndex = 54941;

class PFLGADFBHIO : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::GCIMMDDIFBJ* OGDHHANGGIG; // 0x20
	::MoleMole::NotificationBadgeEx* FAEIAHAOKAB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NGCOAFBJJKF; // 0x30
	::UnityEngine::GameObject* HAHNNHLMKGO; // 0x38
	::LGINJIKKBJA* DMALKCIHLNE; // 0x40
	::LGINJIKKBJA* NNGCMECPIFK; // 0x48
	::MoleMole::MonoGamepadCustomList* NGELIGHHNGF; // 0x50
	::UnityEngine::RectTransform* EKGCNEJNDJN; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* ABIFJOLAPNO; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* MDHHGDLPNFG; // 0x68
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x70
	::MoleMole::UIGeneralButtonController* OEEDEBIOPBL; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* NIJMIHAPEEI; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* PCLNFDNGEBL; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLGADFBHIO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFLGADFBHIO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFLGADFBHIO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLGADFBHIO_KGEBDLGBGNM_OFFSET))(this);
	}
};

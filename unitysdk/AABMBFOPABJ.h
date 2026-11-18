#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define AABMBFOPABJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1349C5A0)
#define AABMBFOPABJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1349C4F0)
#define AABMBFOPABJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1349C310)
#define AABMBFOPABJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1349C590)

inline static constexpr unsigned int AABMBFOPABJ_TypeDefinitionIndex = 53187;

class AABMBFOPABJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x18
	::MoleMole::MonoGamepadSelectable* BIFNJFGLIFA; // 0x20
	::UnityEngine::RectTransform* FLMKBHEPNNF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::RectTransform* BPLHGDNBDFH; // 0x40
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABMBFOPABJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AABMBFOPABJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABMBFOPABJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AABMBFOPABJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

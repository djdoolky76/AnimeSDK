#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JICJLODMADE_BJNIBHPEINI_OFFSET UNITYSDK_OFFSET(0x165ACA30)
#define JICJLODMADE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x165ACC30)
#define JICJLODMADE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x165ACB80)
#define JICJLODMADE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x165AC800)
#define JICJLODMADE__CTOR_OFFSET UNITYSDK_OFFSET(0x165ACC20)

inline static constexpr unsigned int JICJLODMADE_TypeDefinitionIndex = 79457;

class JICJLODMADE : public ::GIBMJLOJLKD
{
public:
	::ADEJAGFCBHK* FJPCAHJIAGA; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KLNIGFAFNBJ; // 0x20
	::MoleMole::NotificationBadgeEx* NPJEOBOKEDK; // 0x28
	::MonoUITableScrollV2* PKHAMIAEKNF; // 0x30
	::LGINJIKKBJA* EALINFDFFJE; // 0x38
	::UnityEngine::RectTransform* HFOLNOFEEGE; // 0x40
	::LGINJIKKBJA* DLIPKGEIFMG; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* EMNMJJCJEFM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICJLODMADE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JICJLODMADE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BJNIBHPEINI(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JICJLODMADE_BJNIBHPEINI_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JICJLODMADE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICJLODMADE_KGEBDLGBGNM_OFFSET))(this);
	}
};

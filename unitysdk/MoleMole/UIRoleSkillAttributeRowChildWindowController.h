#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/EAvatarSkillType.h"

class BPHGNMNLLHF;
class DKKGMHGFHGN;
class DOHJLLDDOCH;
class HPEEFADIKNL;
class IONJPHDIELI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRoleSkillDataRowChildWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18892DE0)
#define MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_SHOWATTRIBUTEVIEW_OFFSET UNITYSDK_OFFSET(0x18892E70)
#define MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_SHOWBUDDYATTRIBUTEVIEW_OFFSET UNITYSDK_OFFSET(0x18893120)
#define MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18893460)
#define MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18893540)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillAttributeRowChildWindowController_TypeDefinitionIndex = 68149;

	class UIRoleSkillAttributeRowChildWindowController : public ::MoleMole::UIWidgetController
	{
	public:
		::HPEEFADIKNL* _view; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillDataRowChildWindowController*>* AFNGPABFKJM; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void ShowAttributeView(::DKKGMHGFHGN* group, ::BPHGNMNLLHF* info, ::Share::EAvatarSkillType type)
		{
			return ((::System::Void(*)(::PVOID, ::DKKGMHGFHGN*, ::BPHGNMNLLHF*, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_SHOWATTRIBUTEVIEW_OFFSET))(this, group, info, type);
		}

		::System::Void ShowBuddyAttributeView(::System::Collections::Generic::List_1<::IONJPHDIELI*>* group, ::DOHJLLDDOCH* skillInfo, ::System::Boolean showTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IONJPHDIELI*>*, ::DOHJLLDDOCH*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER_SHOWBUDDYATTRIBUTEVIEW_OFFSET))(this, group, skillInfo, showTitle);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLATTRIBUTEROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}
	};
}

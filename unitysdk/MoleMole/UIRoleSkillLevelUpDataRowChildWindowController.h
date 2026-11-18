#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/EAvatarSkillType.h"

class BPDOBLDMEGB;
class BPHGNMNLLHF;
class JCEONAFEOBB;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BE5890)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BE5920)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_REFRESHPASIVEDESC_OFFSET UNITYSDK_OFFSET(0x17BE63E0)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17BE59A0)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_SETPERCENTFORMAT_OFFSET UNITYSDK_OFFSET(0x17BE6040)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE64B0)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BE6510)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BE65A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillLevelUpDataRowChildWindowController_TypeDefinitionIndex = 84686;

	class UIRoleSkillLevelUpDataRowChildWindowController : public ::MoleMole::UIWidgetController
	{
	public:
		::JCEONAFEOBB* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean RefreshView(::BPDOBLDMEGB* template_, ::BPHGNMNLLHF* info, ::Share::EAvatarSkillType type, ::System::Boolean isUpgrade)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPDOBLDMEGB*, ::BPHGNMNLLHF*, ::Share::EAvatarSkillType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this, template_, info, type, isUpgrade);
		}

		::System::Void SetPercentFormat(::System::String* strVal, ::UnityEngine::UI::Extension::UIDynamicNumberLabel* text, ::System::Int32 skillPropertyTypeInt, ::System::Boolean isUpgrade)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_SETPERCENTFORMAT_OFFSET))(this, strVal, text, skillPropertyTypeInt, isUpgrade);
		}

		::System::Void RefreshPasiveDesc(::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_REFRESHPASIVEDESC_OFFSET))(this, desc);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}

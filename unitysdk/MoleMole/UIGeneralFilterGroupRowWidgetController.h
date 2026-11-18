#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNPMDGGFBBE.h"
#include "unitysdk/GIHHMALKNLE.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/OKKIMONLGJD.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/Vector2.h"

class GPPIBFNLGIL;
class PEBMGPOBPHH;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ACNBDNFIAHL_OFFSET UNITYSDK_OFFSET(0x180AB5D0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_AELGEJGPDMD_OFFSET UNITYSDK_OFFSET(0x180AA6B0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_GETCHILDITEMSIZE_OFFSET UNITYSDK_OFFSET(0x180AA500)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_GET_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0x180A8080)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_IHKHIIOPCBA_OFFSET UNITYSDK_OFFSET(0x180A9670)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_JAGGEAKBGEG_OFFSET UNITYSDK_OFFSET(0x180AABC0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180A8170)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x180AA240)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x180AA350)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x180AA160)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x180AA460)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x180A8280)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180A8200)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180A8110)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_OPHBPEPJEDB_OFFSET UNITYSDK_OFFSET(0x180AA800)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x180A85B0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_SET_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0x180A8090)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x180A80A0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEBTNTEXT_OFFSET UNITYSDK_OFFSET(0x180AA970)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFILTERITEMSTATE_OFFSET UNITYSDK_OFFSET(0x180A9490)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFOLDDISPLAY_1_OFFSET UNITYSDK_OFFSET(0x180AAC50)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFOLDDISPLAY_OFFSET UNITYSDK_OFFSET(0x180A9A00)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x180AB090)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180AB180)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x180AB210)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x180AB2A0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x180AB330)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x180AB3E0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x180AB410)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180AB4B0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180AB540)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterGroupRowWidgetController_TypeDefinitionIndex = 88320;

	class UIGeneralFilterGroupRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Action_3<::GIHHMALKNLE, ::System::Int32, ::System::Int32>* _EAENIHFLENL_k__BackingField; // 0x2F8
		::PEBMGPOBPHH* _view; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralFilterItemRowWidgetController*>* MEOHKIGFMDL; // 0x308
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* JEBHEKPFOEO; // 0x310
		::System::Boolean MKJALCJOBCJ; // 0x318
		::System::Boolean NIDNNFEKGML; // 0x319
		::System::Byte _padding0[0x6];
		::MoleMole::UIGeneralFilterItemRowWidgetController* BPAHALDGKHP; // 0x320
		::FNPMDGGFBBE MJEOECDHPCP; // 0x328
		::System::Byte _padding1[0x4];
		::GPPIBFNLGIL* MHBHGDGEELL; // 0x330
		::System::Boolean CIEBMLIEJDA; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Action_3<::GIHHMALKNLE, ::System::Int32, ::System::Int32>* get_OnItemClick()
		{
			return ((::System::Action_3<::GIHHMALKNLE, ::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_GET_ONITEMCLICK_OFFSET))(this);
		}

		::System::Void set_OnItemClick(::System::Action_3<::GIHHMALKNLE, ::System::Int32, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::GIHHMALKNLE, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_SET_ONITEMCLICK_OFFSET))(this, value);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_SET_TITLE_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::UnityEngine::Vector2 GetChildItemSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_GETCHILDITEMSIZE_OFFSET))(this);
		}

		::System::Void RefreshItems(::System::Int32 filterGroupIndex, ::GPPIBFNLGIL* typedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::GPPIBFNLGIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_REFRESHITEMS_OFFSET))(this, filterGroupIndex, typedData);
		}

		::System::Void UpdateFilterItemState(::System::Int32 idx, ::System::Boolean selected, ::System::Boolean enabled, ::System::Boolean hideWhenUnEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFILTERITEMSTATE_OFFSET))(this, idx, selected, enabled, hideWhenUnEnable);
		}

		::System::Void UpdateFoldDisplay(::GPPIBFNLGIL* typedData)
		{
			return ((::System::Void(*)(::PVOID, ::GPPIBFNLGIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFOLDDISPLAY_OFFSET))(this, typedData);
		}

		::System::Boolean UpdateFoldDisplay_1(::System::Int32 idx, ::System::Boolean selected)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFOLDDISPLAY_1_OFFSET))(this, idx, selected);
		}

		::System::Void UpdateBtnText(::GPPIBFNLGIL* typedData)
		{
			return ((::System::Void(*)(::PVOID, ::GPPIBFNLGIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEBTNTEXT_OFFSET))(this, typedData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Single AELGEJGPDMD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_AELGEJGPDMD_OFFSET))(this);
		}

		::System::Void ACNBDNFIAHL(::GPPIBFNLGIL* PCKJCJCABDF)
		{
			return ((::System::Void(*)(::PVOID, ::GPPIBFNLGIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ACNBDNFIAHL_OFFSET))(this, PCKJCJCABDF);
		}

		::System::Void IHKHIIOPCBA(::GPPIBFNLGIL* PCKJCJCABDF)
		{
			return ((::System::Void(*)(::PVOID, ::GPPIBFNLGIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_IHKHIIOPCBA_OFFSET))(this, PCKJCJCABDF);
		}

		::UnityEngine::Transform* OPHBPEPJEDB(::GPPIBFNLGIL* IHIGDIILMJN)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::GPPIBFNLGIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_OPHBPEPJEDB_OFFSET))(this, IHIGDIILMJN);
		}

		::MoleMole::MonoGamepadSelectable* JAGGEAKBGEG(::GPPIBFNLGIL* IHIGDIILMJN)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::GPPIBFNLGIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_JAGGEAKBGEG_OFFSET))(this, IHIGDIILMJN);
		}
	};
}

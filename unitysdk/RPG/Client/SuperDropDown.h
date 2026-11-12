#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Dropdown.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class SuperDropDown; }
namespace RPG::Client { class SuperDropDown_VoidDelegate; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Dropdown_DropdownItem; }
namespace UnityEngine::UI { class Dropdown_OptionData; }
namespace UnityEngine::UI { class Toggle; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_SUPERDROPDOWN_ADDITEM_OFFSET UNITYSDK_OFFSET(0xEBFFAF0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_1_OFFSET UNITYSDK_OFFSET(0xEBFF4A0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_2_OFFSET UNITYSDK_OFFSET(0xEBFF620)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_3_OFFSET UNITYSDK_OFFSET(0xEBFF7B0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_4_OFFSET UNITYSDK_OFFSET(0xEBFF9A0)
#define RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0xEBFF3F0)
#define RPG_CLIENT_SUPERDROPDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0xEBFE170)
#define RPG_CLIENT_SUPERDROPDOWN_BINDTOGGLECHANGEDFUNCTION_OFFSET UNITYSDK_OFFSET(0xEC001B0)
#define RPG_CLIENT_SUPERDROPDOWN_CLEAROPTIONS_OFFSET UNITYSDK_OFFSET(0xEBFE870)
#define RPG_CLIENT_SUPERDROPDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0xEC00400)
#define RPG_CLIENT_SUPERDROPDOWN_GET_TURNOFFCHECKVALUE_OFFSET UNITYSDK_OFFSET(0xEBFFA50)
#define RPG_CLIENT_SUPERDROPDOWN_HASSTATE_OFFSET UNITYSDK_OFFSET(0xEBFF1A0)
#define RPG_CLIENT_SUPERDROPDOWN_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xEBFF370)
#define RPG_CLIENT_SUPERDROPDOWN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEBFE370)
#define RPG_CLIENT_SUPERDROPDOWN_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xEBFEAC0)
#define RPG_CLIENT_SUPERDROPDOWN_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xEBFEA50)
#define RPG_CLIENT_SUPERDROPDOWN_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xEBFE9D0)
#define RPG_CLIENT_SUPERDROPDOWN_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xEBFEC50)
#define RPG_CLIENT_SUPERDROPDOWN_ONSELECT_OFFSET UNITYSDK_OFFSET(0xEBFF250)
#define RPG_CLIENT_SUPERDROPDOWN_REFRESHSHOWNVALUE_OFFSET UNITYSDK_OFFSET(0xEBFE560)
#define RPG_CLIENT_SUPERDROPDOWN_SETCHECKED_OFFSET UNITYSDK_OFFSET(0xEBFEF90)
#define RPG_CLIENT_SUPERDROPDOWN_SETLUABINDINGCALLBACK_OFFSET UNITYSDK_OFFSET(0xEC00140)
#define RPG_CLIENT_SUPERDROPDOWN_SETOPTIONSCOUNT_OFFSET UNITYSDK_OFFSET(0xEC00200)
#define RPG_CLIENT_SUPERDROPDOWN_SET_OFFSET UNITYSDK_OFFSET(0xEBFE440)
#define RPG_CLIENT_SUPERDROPDOWN_SET_TURNOFFCHECKVALUE_OFFSET UNITYSDK_OFFSET(0xEBFFAA0)
#define RPG_CLIENT_SUPERDROPDOWN_START_OFFSET UNITYSDK_OFFSET(0xEBFE290)
#define RPG_CLIENT_SUPERDROPDOWN_UPDATE_OFFSET UNITYSDK_OFFSET(0xEBFDFD0)
#define RPG_CLIENT_SUPERDROPDOWN__ANIMATORCHECK_OFFSET UNITYSDK_OFFSET(0xEBFF0B0)
#define RPG_CLIENT_SUPERDROPDOWN__INITNAVIGATIONMODE_OFFSET UNITYSDK_OFFSET(0xEC000B0)
#define RPG_CLIENT_SUPERDROPDOWN__ONUIINCONTROLTIPUPDATE_OFFSET UNITYSDK_OFFSET(0xEBFFF40)

namespace RPG::Client
{
	inline static constexpr unsigned int SuperDropDown_TypeDefinitionIndex = 74746;

	class SuperDropDown : public ::UnityEngine::UI::Dropdown
	{
	public:
		::UnityEngine::Animator* localAnimator; // 0x180
		::System::Boolean _IsFirstSet; // 0x188
		::System::Byte _padding0[0x3];
		::System::Int32 _IsSelectedHash; // 0x18C
		::System::Int32 _SelectedHash; // 0x190
		::System::Int32 _NormalHash; // 0x194
		::RPG::Client::SuperDropDown_VoidDelegate* onSelectTrigger; // 0x198
		::RPG::Client::SuperDropDown_VoidDelegate* onDeselectTrigger; // 0x1A0
		::System::Action_4<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Object*, ::System::Int32>* mOnSetShowItemOption; // 0x1A8
		::System::Action_3<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32>* mOnSetSelectOption; // 0x1B0
		::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>* mOnToggleClick; // 0x1B8
		::XLua::LuaTable* bindingPanel; // 0x1C0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_UPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONDESTROY_OFFSET))(this);
		}

		::System::Void Set(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_SET_OFFSET))(this, a1, a2);
		}

		::System::Void ClearOptions(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_CLEAROPTIONS_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSelectItem(::UnityEngine::UI::Toggle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void SetChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_SETCHECKED_OFFSET))(this, a1);
		}

		::System::Boolean HasState(::UnityEngine::Animator* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_HASSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void RefreshShownValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_REFRESHSHOWNVALUE_OFFSET))(this);
		}

		::System::Void AddOptions(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_OFFSET))(this, a1);
		}

		::System::Void AddOptions_1(::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_1_OFFSET))(this, a1);
		}

		::System::Void AddOptions_2(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_2_OFFSET))(this, a1, a2);
		}

		::System::Void AddOptions_3(::System::Collections::Generic::List_1<::RPG::Client::TextID>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_3_OFFSET))(this, a1);
		}

		::System::Void AddOptions_4(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDOPTIONS_4_OFFSET))(this, a1);
		}

		::System::Boolean get_TurnOffCheckValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_GET_TURNOFFCHECKVALUE_OFFSET))(this);
		}

		::System::Void set_TurnOffCheckValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_SET_TURNOFFCHECKVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Dropdown_DropdownItem* AddItem(::UnityEngine::UI::Dropdown_OptionData* a1, ::System::Boolean a2, ::UnityEngine::UI::Dropdown_DropdownItem* a3, ::System::Collections::Generic::List_1<::System::Object*>* a4)
		{
			return ((::UnityEngine::UI::Dropdown_DropdownItem*(*)(::PVOID, ::UnityEngine::UI::Dropdown_OptionData*, ::System::Boolean, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_ADDITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _AnimatorCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN__ANIMATORCHECK_OFFSET))(this);
		}

		::System::Void _OnUIInControlTipUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN__ONUIINCONTROLTIPUPDATE_OFFSET))(this, a1);
		}

		::System::Void _InitNavigationMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN__INITNAVIGATIONMODE_OFFSET))(this);
		}

		::System::Void SetLuaBindingCallback(::XLua::LuaTable* a1, ::System::Action_4<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Object*, ::System::Int32>* a2, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_4<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Object*, ::System::Int32>*, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_SETLUABINDINGCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BindToggleChangedFunction(::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_BINDTOGGLECHANGEDFUNCTION_OFFSET))(this, a1);
		}

		::System::Void SetOptionsCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_SETOPTIONSCOUNT_OFFSET))(this, a1);
		}

	};
}

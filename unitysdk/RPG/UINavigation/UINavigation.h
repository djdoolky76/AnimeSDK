#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/EJOHEMFHNAH.h"
class FHENBGFPCCB;
namespace RPG::UINavigation { class UINavigation; }
namespace RPG::UINavigation { class UINavigationInControlAction; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATION_ADDFOCUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF359160)
#define RPG_UINAVIGATION_UINAVIGATION_ADDINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xF3592C0)
#define RPG_UINAVIGATION_UINAVIGATION_ADD_ONCHILDRENINVALIDATED_OFFSET UNITYSDK_OFFSET(0xF3586F0)
#define RPG_UINAVIGATION_UINAVIGATION_ADD_ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0xF3585F0)
#define RPG_UINAVIGATION_UINAVIGATION_CCTOR_OFFSET UNITYSDK_OFFSET(0xF35A4E0)
#define RPG_UINAVIGATION_UINAVIGATION_CTOR_OFFSET UNITYSDK_OFFSET(0xF35A470)
#define RPG_UINAVIGATION_UINAVIGATION_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xF3596C0)
#define RPG_UINAVIGATION_UINAVIGATION_GET_ACTIVEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0xF357CA0)
#define RPG_UINAVIGATION_UINAVIGATION_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xF357C10)
#define RPG_UINAVIGATION_UINAVIGATION_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0xF358310)
#define RPG_UINAVIGATION_UINAVIGATION_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xF3587B0)
#define RPG_UINAVIGATION_UINAVIGATION_GET_ISROOT_OFFSET UNITYSDK_OFFSET(0xF357E40)
#define RPG_UINAVIGATION_UINAVIGATION_GET_NAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xF3587F0)
#define RPG_UINAVIGATION_UINAVIGATION_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xF357D40)
#define RPG_UINAVIGATION_UINAVIGATION_GET_SPECIFIEDPARENT_OFFSET UNITYSDK_OFFSET(0xF3582D0)
#define RPG_UINAVIGATION_UINAVIGATION_ISDIRECTCHILDOF_OFFSET UNITYSDK_OFFSET(0xF358D60)
#define RPG_UINAVIGATION_UINAVIGATION_ISINTOPZONE_OFFSET UNITYSDK_OFFSET(0xF358FD0)
#define RPG_UINAVIGATION_UINAVIGATION_ISNAVIGABLE_OFFSET UNITYSDK_OFFSET(0xF359710)
#define RPG_UINAVIGATION_UINAVIGATION_MARKSHOULDREBUILDCHILDREN_OFFSET UNITYSDK_OFFSET(0xF358D00)
#define RPG_UINAVIGATION_UINAVIGATION_MARKSHOULDUPDATENAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xF3593E0)
#define RPG_UINAVIGATION_UINAVIGATION_ONCHILDDESELECTED_OFFSET UNITYSDK_OFFSET(0xF358F10)
#define RPG_UINAVIGATION_UINAVIGATION_ONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0xF358EC0)
#define RPG_UINAVIGATION_UINAVIGATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF358B70)
#define RPG_UINAVIGATION_UINAVIGATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF358A60)
#define RPG_UINAVIGATION_UINAVIGATION_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0xF358E20)
#define RPG_UINAVIGATION_UINAVIGATION_ONPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xF358020)
#define RPG_UINAVIGATION_UINAVIGATION_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xF3589C0)
#define RPG_UINAVIGATION_UINAVIGATION_REBUILDCHILDREN_OFFSET UNITYSDK_OFFSET(0xF358370)
#define RPG_UINAVIGATION_UINAVIGATION_REFRESHALLNAVIGATIONHIERARCHY_OFFSET UNITYSDK_OFFSET(0xF359990)
#define RPG_UINAVIGATION_UINAVIGATION_REMOVEFOCUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF359210)
#define RPG_UINAVIGATION_UINAVIGATION_REMOVEINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xF359370)
#define RPG_UINAVIGATION_UINAVIGATION_REMOVE_ONCHILDRENINVALIDATED_OFFSET UNITYSDK_OFFSET(0xF358750)
#define RPG_UINAVIGATION_UINAVIGATION_REMOVE_ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0xF358670)
#define RPG_UINAVIGATION_UINAVIGATION_SETFOCUSED_OFFSET UNITYSDK_OFFSET(0xF358F60)
#define RPG_UINAVIGATION_UINAVIGATION_SETPARENT_OFFSET UNITYSDK_OFFSET(0xF359550)
#define RPG_UINAVIGATION_UINAVIGATION_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xF357C50)
#define RPG_UINAVIGATION_UINAVIGATION_SET_ISROOT_OFFSET UNITYSDK_OFFSET(0xF357E80)
#define RPG_UINAVIGATION_UINAVIGATION__FINDNAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xF358850)
#define RPG_UINAVIGATION_UINAVIGATION__FINDPARENTNAVIGATION_OFFSET UNITYSDK_OFFSET(0xF358270)
#define RPG_UINAVIGATION_UINAVIGATION__INVALIDATEHIERARCHYCACHES_OFFSET UNITYSDK_OFFSET(0xF359940)
#define RPG_UINAVIGATION_UINAVIGATION__INVALIDATEPARENTBINDING_OFFSET UNITYSDK_OFFSET(0xF357FD0)
#define RPG_UINAVIGATION_UINAVIGATION__MARKPARENTSHOULDREBUILDCHILDREN_OFFSET UNITYSDK_OFFSET(0xF357F30)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigation_TypeDefinitionIndex = 52812;

	class UINavigation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _ShouldUpdateChildren; // 0x18
		::System::Boolean _ShouldUpdateNavigationZone; // 0x19
		::System::Boolean _ShouldUpdateParent; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Int32 _CurrentIndex; // 0x1C
		::System::Boolean _EnableCalled; // 0x20
		::System::Boolean _Active; // 0x21
		::System::Boolean _IsRoot; // 0x22
		::System::Byte _padding1[0x5];
		::RPG::UINavigation::UINavigation* _Parent; // 0x28
		::RPG::UINavigation::UINavigation* _SpecifiedParent; // 0x30
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>* _Children; // 0x38
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* _InControlActions; // 0x40
		::System::Boolean _IsFocused; // 0x48
		::System::Byte _padding2[0x7];
		::System::Action_1<::System::Boolean>* OnFocusChanged; // 0x50
		::System::Action* OnChildrenInvalidated; // 0x58
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0x60
		static ::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>** StaticGet__AllNavigations()
		{
			return (::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>**)UnitySDK::FromName("RPG.UINavigation", "UINavigation")->GetStaticField(0x73CB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_CCTOR_OFFSET))();
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_Active(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_SET_ACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_ActiveInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_ACTIVEINHIERARCHY_OFFSET))(this);
		}

		::System::Boolean get_IsRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_ISROOT_OFFSET))(this);
		}

		::System::Void set_IsRoot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_SET_ISROOT_OFFSET))(this, a1);
		}

		::RPG::UINavigation::UINavigation* get_Parent()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_PARENT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigation* get_SpecifiedParent()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_SPECIFIEDPARENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>* get_Children()
		{
			return ((::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void add_OnFocusChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ADD_ONFOCUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFocusChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_REMOVE_ONFOCUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnChildrenInvalidated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ADD_ONCHILDRENINVALIDATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnChildrenInvalidated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_REMOVE_ONCHILDRENINVALIDATED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_ISFOCUSED_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* get_NavigationZone()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_NAVIGATIONZONE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONDISABLE_OFFSET))(this);
		}

		::System::Void MarkShouldRebuildChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_MARKSHOULDREBUILDCHILDREN_OFFSET))(this);
		}

		::System::Void RebuildChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_REBUILDCHILDREN_OFFSET))(this);
		}

		::System::Void OnParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONPARENTCHANGED_OFFSET))(this);
		}

		::EJOHEMFHNAH OnNavigation(::FHENBGFPCCB* a1)
		{
			return ((::EJOHEMFHNAH(*)(::PVOID, ::FHENBGFPCCB*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONNAVIGATION_OFFSET))(this, a1);
		}

		::System::Void OnChildSelected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONCHILDSELECTED_OFFSET))(this, a1);
		}

		::System::Void OnChildDeselected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONCHILDDESELECTED_OFFSET))(this, a1);
		}

		::System::Void SetFocused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_SETFOCUSED_OFFSET))(this, a1);
		}

		::System::Boolean IsInTopZone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ISINTOPZONE_OFFSET))(this);
		}

		::System::Void AddFocusChangedCallback(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ADDFOCUSCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveFocusChangedCallback(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_REMOVEFOCUSCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddInControlAction(::RPG::UINavigation::UINavigationInControlAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ADDINCONTROLACTION_OFFSET))(this, a1);
		}

		::System::Void RemoveInControlAction(::RPG::UINavigation::UINavigationInControlAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_REMOVEINCONTROLACTION_OFFSET))(this, a1);
		}

		::System::Void MarkShouldUpdateNavigationZone(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_MARKSHOULDUPDATENAVIGATIONZONE_OFFSET))(this, a1);
		}

		::System::Void SetParent(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_SETPARENT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetFirstSelectable(::FHENBGFPCCB* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::FHENBGFPCCB*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GETFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::System::Boolean IsDirectChildOf(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ISDIRECTCHILDOF_OFFSET))(this, a1);
		}

		::System::Boolean IsNavigable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ISNAVIGABLE_OFFSET))(this);
		}

		::System::Void _InvalidateParentBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__INVALIDATEPARENTBINDING_OFFSET))(this);
		}

		::System::Void _MarkParentShouldRebuildChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__MARKPARENTSHOULDREBUILDCHILDREN_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigation* _FindParentNavigation()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__FINDPARENTNAVIGATION_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* _FindNavigationZone()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__FINDNAVIGATIONZONE_OFFSET))(this);
		}

		::System::Void _InvalidateHierarchyCaches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__INVALIDATEHIERARCHYCACHES_OFFSET))(this);
		}

		static ::System::Void RefreshAllNavigationHierarchy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_REFRESHALLNAVIGATIONHIERARCHY_OFFSET))();
		}

	};
}

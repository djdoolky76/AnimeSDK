#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIButtonSoundType.h"
#include "unitysdk/UnityEngine/UI/Button.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_CUSTOMBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B7EF600)
#define RPG_CLIENT_CUSTOMBUTTON_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EFD00)
#define RPG_CLIENT_CUSTOMBUTTON_GET_ISFORBIDBUTTONCHECK_OFFSET UNITYSDK_OFFSET(0x1B7EFC60)
#define RPG_CLIENT_CUSTOMBUTTON_GET__CANHOVER_OFFSET UNITYSDK_OFFSET(0x1B7EF7D0)
#define RPG_CLIENT_CUSTOMBUTTON_IGNOREPOINTDISTANCECHECK_OFFSET UNITYSDK_OFFSET(0x1B7EF010)
#define RPG_CLIENT_CUSTOMBUTTON_ISPOINTINRECT_OFFSET UNITYSDK_OFFSET(0x1B7EEC60)
#define RPG_CLIENT_CUSTOMBUTTON_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1B7EFA60)
#define RPG_CLIENT_CUSTOMBUTTON_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1B7EF860)
#define RPG_CLIENT_CUSTOMBUTTON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1B7EF6C0)
#define RPG_CLIENT_CUSTOMBUTTON_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1B7EF960)
#define RPG_CLIENT_CUSTOMBUTTON_POSTBUTTONSOUND_OFFSET UNITYSDK_OFFSET(0x1B7EF3E0)
#define RPG_CLIENT_CUSTOMBUTTON_SETMOBILEHOVERENABLE_OFFSET UNITYSDK_OFFSET(0x1B7EFAE0)
#define RPG_CLIENT_CUSTOMBUTTON_SET_ISFORBIDBUTTONCHECK_OFFSET UNITYSDK_OFFSET(0x1B7EFCB0)
#define RPG_CLIENT_CUSTOMBUTTON_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1B7EF250)
#define RPG_CLIENT_CUSTOMBUTTON_SUBSCRIBECLICKEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1B7EF080)
#define RPG_CLIENT_CUSTOMBUTTON_UNSUBSCRIBEALLCLICKEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1B7EF1C0)
#define RPG_CLIENT_CUSTOMBUTTON__INITNAVIGATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B7EFBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomButton_TypeDefinitionIndex = 74597;

	class CustomButton : public ::UnityEngine::UI::Button
	{
	public:
		::System::Boolean _IsFirstSet; // 0x110
		::System::Boolean _IsForbidButtonCheck; // 0x111
		::System::Byte _padding0[0x6];
		::UnityEngine::RectTransform* _TmpRect; // 0x118
		::System::Boolean _EnableMobileHover; // 0x120
		::System::Boolean IsSelectDisabled; // 0x121
		::System::Byte _padding1[0x6];
		::RPG::Client::CustomButton_VoidDelegate* onSelectTrigger; // 0x128
		::RPG::Client::CustomButton_VoidDelegate* onDeselectTrigger; // 0x130
		::RPG::Client::CustomButton_VoidDelegate* onPointerEnterTrigger; // 0x138
		::RPG::Client::CustomButton_VoidDelegate* onPointerExitTrigger; // 0x140
		::System::Boolean IsSelectedByController; // 0x148
		::System::Byte _padding2[0x3];
		::RPG::Client::UIButtonSoundType SoundType; // 0x14C
		::System::String* SpecialSoundEvent; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_CTOR_OFFSET))(this);
		}

		::System::Boolean IsPointInRect(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ISPOINTINRECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IgnorePointDistanceCheck(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_IGNOREPOINTDISTANCECHECK_OFFSET))(this, a1);
		}

		::System::Action* SubscribeClickEventListener(::System::Action* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_SUBSCRIBECLICKEVENTLISTENER_OFFSET))(this, a1);
		}

		::System::Void UnsubscribeAllClickEventListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_UNSUBSCRIBEALLCLICKEVENTLISTENER_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_SUBMIT_OFFSET))(this);
		}

		::System::Void PostButtonSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_POSTBUTTONSOUND_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_AWAKE_OFFSET))(this);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void SetMobileHoverEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_SETMOBILEHOVERENABLE_OFFSET))(this, a1);
		}

		::System::Void _InitNavigationMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON__INITNAVIGATIONMODE_OFFSET))(this);
		}

		::System::Boolean get__CanHover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_GET__CANHOVER_OFFSET))(this);
		}

		::System::Boolean get_IsForbidButtonCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_GET_ISFORBIDBUTTONCHECK_OFFSET))(this);
		}

		::System::Void set_IsForbidButtonCheck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_SET_ISFORBIDBUTTONCHECK_OFFSET))(this, a1);
		}

	};
}

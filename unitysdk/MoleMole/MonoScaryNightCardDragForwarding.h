#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2;
namespace System { class Action; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_GET_PARENTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x14B01560)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_GET_SCROLLONLY_OFFSET UNITYSDK_OFFSET(0x14B01540)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x14B02AC0)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x14B01580)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONDRAG_OFFSET UNITYSDK_OFFSET(0x14B01F10)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x14B02210)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x14B02510)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x14B02680)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x14B02570)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x14B02610)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x14B02B60)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_SETENABLED_OFFSET UNITYSDK_OFFSET(0x14B02A50)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_SET_PARENTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x14B01570)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_SET_SCROLLONLY_OFFSET UNITYSDK_OFFSET(0x14B01550)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_UPDATE_OFFSET UNITYSDK_OFFSET(0x14B02950)
#define MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING__CTOR_OFFSET UNITYSDK_OFFSET(0x14B02D80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScaryNightCardDragForwarding_TypeDefinitionIndex = 78535;

	class MonoScaryNightCardDragForwarding : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single HoldThreshold; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* DragTarget; // 0x20
		::UnityEngine::GameObject* HoldAndDragTarget; // 0x28
		::System::Action* EventHoldTriggered; // 0x30
		::System::Action* EventPointerDown; // 0x38
		::System::Action* EventPointerUp; // 0x40
		::System::Action* EventPointerClick; // 0x48
		::UnityEngine::UI::Extension::UILocalizationText* TextWithLink; // 0x50
		::UnityEngine::UI::Extension::UIButtonEx* DelegateButton; // 0x58
		::MonoUITableScrollV2* ScrollView; // 0x60
		::System::Boolean _enabled; // 0x68
		::System::Boolean _JPAICGOHHKM_k__BackingField; // 0x69
		::System::Byte _padding1[0x6];
		::MonoUITableScrollV2* _HHABFELDHMP_k__BackingField; // 0x70
		::System::Single FNLFPFKGLKD; // 0x78
		::System::Boolean OOFAJCOANBB; // 0x7C
		::System::Boolean EFKKOGOPAKK; // 0x7D
		::System::Byte _padding2[0x2];
		::UnityEngine::GameObject* JLBDAIMNOOO; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ScrollOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_GET_SCROLLONLY_OFFSET))(this);
		}

		::System::Void set_ScrollOnly(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_SET_SCROLLONLY_OFFSET))(this, EGEGIMGMJHN);
		}

		::MonoUITableScrollV2* get_ParentScrollView()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_GET_PARENTSCROLLVIEW_OFFSET))(this);
		}

		::System::Void set_ParentScrollView(::MonoUITableScrollV2* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_SET_PARENTSCROLLVIEW_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONPOINTERDOWN_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONPOINTERUP_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_UPDATE_OFFSET))(this);
		}

		::System::Void SetEnabled(::System::Boolean DECIDLELLCP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_SETENABLED_OFFSET))(this, DECIDLELLCP);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 LPFMJMABGNH, ::UnityEngine::Camera* CPBJOCELGNO)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ISRAYCASTLOCATIONVALID_OFFSET))(this, LPFMJMABGNH, CPBJOCELGNO);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCARYNIGHTCARDDRAGFORWARDING_ONSCROLL_OFFSET))(this, DIHNFECKHMD);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple_2.h"

class BLCIDFMMHIL;
namespace MoleMole { class UIMultiInteractionTargetListChildWindowController; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x168C73A0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_CLEANUP_OFFSET UNITYSDK_OFFSET(0x168C74B0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_CLEARPOOLED_OFFSET UNITYSDK_OFFSET(0x168C8070)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_CONTENTFULLYINSIDEVIEWPORT_OFFSET UNITYSDK_OFFSET(0x168C9700)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_DEALLOCATEALLIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x168C7A00)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x168C78B0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_FILLPOOL_OFFSET UNITYSDK_OFFSET(0x168C6F30)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_FINDBYINTERACTION_OFFSET UNITYSDK_OFFSET(0x168C8E40)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETCONTENTVERTICALBOUND_OFFSET UNITYSDK_OFFSET(0x168C97F0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETITEMCTRL_OFFSET UNITYSDK_OFFSET(0x168C8DB0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETVERTICALALIGNDISTANCE_OFFSET UNITYSDK_OFFSET(0x168C9D10)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETVERTICALBOUND_OFFSET UNITYSDK_OFFSET(0x168C9110)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETVERTICALSCROLLDISTANCE_OFFSET UNITYSDK_OFFSET(0x168C9900)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETVIEWPORTVERTICALBOUND_OFFSET UNITYSDK_OFFSET(0x168C9850)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_ONWILLRENDERCANVAS_OFFSET UNITYSDK_OFFSET(0x168C6980)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x168C8120)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_RESETEMPTYPOSTITION_OFFSET UNITYSDK_OFFSET(0x168C6E30)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_SCROLLSPEEDCURVE_OFFSET UNITYSDK_OFFSET(0x168C9C30)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x168C9B80)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_SETKEEPVISIBLETARGET_OFFSET UNITYSDK_OFFSET(0x168C98B0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_STARTITEMFADEIN_OFFSET UNITYSDK_OFFSET(0x168C8C60)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_STARTITEMFADEOUT_OFFSET UNITYSDK_OFFSET(0x168C7B80)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_STOPSCROLL_OFFSET UNITYSDK_OFFSET(0x168C9BD0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_UPDATEKEEPTARGETVISIBLE_OFFSET UNITYSDK_OFFSET(0x168C6AF0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_UPDATESCROLL_OFFSET UNITYSDK_OFFSET(0x168C6420)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x168C62A0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_WARMUP_OFFSET UNITYSDK_OFFSET(0x168C6EE0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x168C5E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListChildWindowController_ScrollView_TypeDefinitionIndex = 49826;

	class UIMultiInteractionTargetListChildWindowController_ScrollView : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* _cornerBuffer; // 0x10
		::UnityEngine::UI::ScrollRect* _root; // 0x18
		::MoleMole::UIMultiInteractionTargetListChildWindowController* _parent; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController*>* _fadeOutCtrls; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* _data; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController*>* _ctrls; // 0x38
		::UnityEngine::RectTransform* _keepVisibleTarget; // 0x40
		::System::Collections::Generic::Stack_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController*>* _pooled; // 0x48
		::UnityEngine::RectTransform* _scrollTarget; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController*>* _tmpCtrls; // 0x58
		::System::Single ScrollSpeedCurveDistanceScale; // 0x60
		::System::Single ScrollSpeedVelocityScale; // 0x64
		::System::Single ScrollSpeed; // 0x68
		::System::Int32 _allocatedCount; // 0x6C
		::System::Single ScrollTargetPaddingViewportPercentage; // 0x70
		::System::Int32 _maxAllocateCount; // 0x74
		::System::Int32 _cleanupTag; // 0x78
		::System::Single _earliestCleanupTime; // 0x7C

		::System::Void _ctor(::UnityEngine::UI::ScrollRect* root, ::MoleMole::UIMultiInteractionTargetListChildWindowController* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*, ::MoleMole::UIMultiInteractionTargetListChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW__CTOR_OFFSET))(this, root, parent);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnWillRenderCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_ONWILLRENDERCANVAS_OFFSET))(this);
		}

		::System::Void ResetEmptyPostition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_RESETEMPTYPOSTITION_OFFSET))(this);
		}

		::System::Void Warmup(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_WARMUP_OFFSET))(this, count);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController* Allocate()
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_ALLOCATE_OFFSET))(this);
		}

		::System::Void FillPool(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_FILLPOOL_OFFSET))(this, count);
		}

		::System::Void Deallocate(::MoleMole::UIMultiInteractionTargetListItemWidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_DEALLOCATE_OFFSET))(this, item);
		}

		::System::Void DeallocateAllImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_DEALLOCATEALLIMMEDIATELY_OFFSET))(this);
		}

		::System::Void ClearPooled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_CLEARPOOLED_OFFSET))(this);
		}

		::System::Void RefreshData(::System::Collections::Generic::List_1<::System::Object*>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_REFRESHDATA_OFFSET))(this, data);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController* GetItemCtrl(::System::Int32 index)
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETITEMCTRL_OFFSET))(this, index);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController* FindByInteraction(::BLCIDFMMHIL* instance)
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController*(*)(::PVOID, ::BLCIDFMMHIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_FINDBYINTERACTION_OFFSET))(this, instance);
		}

		::System::Void StartItemFadeIn(::MoleMole::UIMultiInteractionTargetListItemWidgetController* itemCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_STARTITEMFADEIN_OFFSET))(this, itemCtrl);
		}

		::System::Void StartItemFadeOut(::MoleMole::UIMultiInteractionTargetListItemWidgetController* itemCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_STARTITEMFADEOUT_OFFSET))(this, itemCtrl);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_CLEANUP_OFFSET))(this);
		}

		::System::Boolean ContentFullyInsideViewport(::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_CONTENTFULLYINSIDEVIEWPORT_OFFSET))(this, tolerance);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> GetContentVerticalBound()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETCONTENTVERTICALBOUND_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> GetViewportVerticalBound()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETVIEWPORTVERTICALBOUND_OFFSET))(this);
		}

		::System::Void SetKeepVisibleTarget(::UnityEngine::RectTransform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_SETKEEPVISIBLETARGET_OFFSET))(this, target);
		}

		::System::Void UpdateKeepTargetVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_UPDATEKEEPTARGETVISIBLE_OFFSET))(this);
		}

		::System::Void ScrollToTarget(::UnityEngine::RectTransform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_SCROLLTOTARGET_OFFSET))(this, target);
		}

		::System::Void StopScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_STOPSCROLL_OFFSET))(this);
		}

		::System::Void UpdateScroll(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_UPDATESCROLL_OFFSET))(this, deltaTime);
		}

		::System::Single GetVerticalAlignDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETVERTICALALIGNDISTANCE_OFFSET))(this);
		}

		::System::Single GetVerticalScrollDistance(::UnityEngine::RectTransform* target)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETVERTICALSCROLLDISTANCE_OFFSET))(this, target);
		}

		static ::System::Single ScrollSpeedCurve(::System::Single distance, ::System::Single normalizationFactor, ::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_SCROLLSPEEDCURVE_OFFSET))(distance, normalizationFactor, a, b);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> GetVerticalBound(::UnityEngine::RectTransform* transform, ::System::Single padding)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETVERTICALBOUND_OFFSET))(this, transform, padding);
		}
	};
}

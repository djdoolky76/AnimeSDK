#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext_AlignParamType.h"
#include "unitysdk/NAPScrollView/DataStruct/MoveContext.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetResult.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MonoUITableScrollV2;
class MonoUITableScrollV2_BaseScrollLogic;
class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_CALSELECTALIGNTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x16B4CAD0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_CHECKFORLOOP_OFFSET UNITYSDK_OFFSET(0x16B4B900)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_COMPUTEVISIBLEDELTABYLOCALRANGE_OFFSET UNITYSDK_OFFSET(0x16B4E5C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GETAVGITEMSIZE_OFFSET UNITYSDK_OFFSET(0x16B4B940)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GETCUSTOMRANGEBYBOUNDS_OFFSET UNITYSDK_OFFSET(0x16B4E9F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GETCUSTOMRANGEBYINDEX_OFFSET UNITYSDK_OFFSET(0x16B4E950)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GETCUSTOMRANGEBYRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x16B4E9A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x16B4B870)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x16B4AEC0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x16B4AEE0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_INITSCROLL_OFFSET UNITYSDK_OFFSET(0x16B4AF00)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_ISMOVETOEND_OFFSET UNITYSDK_OFFSET(0x16B4E020)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_MOVESCROLLEX_OFFSET UNITYSDK_OFFSET(0x16B4B2F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_NOTIFYMOVESCROLLSTEP_OFFSET UNITYSDK_OFFSET(0x16B4B5B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_ONSCROLLVALUESIMPLECHANGED_OFFSET UNITYSDK_OFFSET(0x16B4F6F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLRECTTRANSFORMBYALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x16B4C190)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLRECTTRANSFORMINTOVIEW_OFFSET UNITYSDK_OFFSET(0x16B4FB00)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOBOTTOMWITHANIM_OFFSET UNITYSDK_OFFSET(0x16B4F1F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOBOTTOMWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x16B4F240)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOCONTENTBOTTOMWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x16B4F290)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOCONTENTTOPWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x16B4F330)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOEND_OFFSET UNITYSDK_OFFSET(0x16B4EA50)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOSHOWTARGETWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x16B4BAF0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOSHOWWORLDRECT_OFFSET UNITYSDK_OFFSET(0x16B4E070)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOSTART_OFFSET UNITYSDK_OFFSET(0x16B4EDD0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOTARGETWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x16B4F380)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x16B4BB50)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOTOPWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x16B4F2E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_1_OFFSET UNITYSDK_OFFSET(0x16B4BA20)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_2_OFFSET UNITYSDK_OFFSET(0x16B4BA80)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_OFFSET UNITYSDK_OFFSET(0x16B4B9D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SIMULATIONDAMPIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x16B4F6B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SIMULATIONDRAG_OFFSET UNITYSDK_OFFSET(0x16B4F430)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SIMULATIONGRIDALIGN_OFFSET UNITYSDK_OFFSET(0x16B4F650)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B4AEB0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleScrollService_TypeDefinitionIndex = 76516;

	class SimpleScrollService
	{
	public:
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x20

		::System::Void _ctor(::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GET_LOGIC_OFFSET))(this);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GET_OWNER_OFFSET))(this);
		}

		::System::Void InitScroll(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_INITSCROLL_OFFSET))(this, force);
		}

		::System::Void MoveScrollEx(::NAPScrollView::DataStruct::MoveContext moveContext)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_MOVESCROLLEX_OFFSET))(this, moveContext);
		}

		::System::Single get_CurrentPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GET_CURRENTPOSITION_OFFSET))(this);
		}

		::System::Boolean CheckForLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_CHECKFORLOOP_OFFSET))(this);
		}

		::System::Single GetAvgItemSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GETAVGITEMSIZE_OFFSET))(this);
		}

		::System::Void SetInitPendingScrollTarget(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_OFFSET))(this, dataIndex);
		}

		::System::Void SetInitPendingScrollTarget_1(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_1_OFFSET))(this, dataIndex, toEnd, fromDataIndex);
		}

		::System::Void SetInitPendingScrollTarget_2(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex, ::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType alignParamType, ::MonoUITableScrollV2_ScrollParams_AlignParam* overrideAlignParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>, ::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_2_OFFSET))(this, dataIndex, toEnd, fromDataIndex, alignParamType, overrideAlignParam);
		}

		::System::Void ScrollToShowTargetWithoutAnim(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOSHOWTARGETWITHOUTANIM_OFFSET))(this, dataIndex, toEnd, fromDataIndex);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToTarget(::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOTARGET_OFFSET))(this, context);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalSelectAlignTargetPosition(::NAPScrollView::DataStruct::ScrollFloat start, ::NAPScrollView::DataStruct::ScrollFloat end, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_CALSELECTALIGNTARGETPOSITION_OFFSET))(this, start, end, alignParam);
		}

		::System::Nullable_1<::System::Boolean> IsMoveToEnd(::System::Int32 toIndex, ::System::Nullable_1<::System::Int32> fromIndex)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_ISMOVETOEND_OFFSET))(this, toIndex, fromIndex);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToShowWorldRect(::UnityEngine::Vector3 worldPointA, ::UnityEngine::Vector3 worldPointB, ::System::Boolean hasAnim, ::System::Single padding)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOSHOWWORLDRECT_OFFSET))(this, worldPointA, worldPointB, hasAnim, padding);
		}

		::UnityEngine::Vector2 GetCustomRangeByIndex(::System::Int32 dataIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GETCUSTOMRANGEBYINDEX_OFFSET))(this, dataIndex);
		}

		::UnityEngine::Vector2 GetCustomRangeByRectTransform(::UnityEngine::RectTransform* trans)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GETCUSTOMRANGEBYRECTTRANSFORM_OFFSET))(this, trans);
		}

		::UnityEngine::Vector2 GetCustomRangeByBounds(::UnityEngine::Bounds bounds)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_GETCUSTOMRANGEBYBOUNDS_OFFSET))(this, bounds);
		}

		::System::Void ScrollToEnd(::System::Boolean hasAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOEND_OFFSET))(this, hasAnim);
		}

		::System::Void ScrollToStart(::System::Boolean hasAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOSTART_OFFSET))(this, hasAnim);
		}

		::System::Void ScrollToBottomWithAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOBOTTOMWITHANIM_OFFSET))(this);
		}

		::System::Void ScrollToBottomWithoutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOBOTTOMWITHOUTANIM_OFFSET))(this);
		}

		::System::Void ScrollToContentBottomWithoutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOCONTENTBOTTOMWITHOUTANIM_OFFSET))(this);
		}

		::System::Void ScrollToTopWithoutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOTOPWITHOUTANIM_OFFSET))(this);
		}

		::System::Void ScrollToContentTopWithoutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOCONTENTTOPWITHOUTANIM_OFFSET))(this);
		}

		::System::Void ScrollToTargetWithoutAnim(::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLTOTARGETWITHOUTANIM_OFFSET))(this, context);
		}

		::System::Void SimulationDrag(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SIMULATIONDRAG_OFFSET))(this, delta);
		}

		::System::Void SimulationGridAlign(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SIMULATIONGRIDALIGN_OFFSET))(this, delta);
		}

		::System::Void SimulationDampImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SIMULATIONDAMPIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnScrollValueSimpleChanged(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_ONSCROLLVALUESIMPLECHANGED_OFFSET))(this, v);
		}

		::System::Void ScrollRectTransformByAlignParam(::NAPScrollView::DataStruct::ScrollToTargetContext context, ::UnityEngine::RectTransform* rt)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLRECTTRANSFORMBYALIGNPARAM_OFFSET))(this, context, rt);
		}

		::System::Void ScrollRectTransformIntoView(::UnityEngine::RectTransform* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_SCROLLRECTTRANSFORMINTOVIEW_OFFSET))(this, rt);
		}

		::System::Single ComputeVisibleDeltaByLocalRange(::System::Single localMin, ::System::Single localMax)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_COMPUTEVISIBLEDELTABYLOCALRANGE_OFFSET))(this, localMin, localMax);
		}

		::System::Void NotifyMoveScrollStep(::NAPScrollView::DataStruct::MoveContext moveContext)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLSERVICE_NOTIFYMOVESCROLLSTEP_OFFSET))(this, moveContext);
		}
	};
}

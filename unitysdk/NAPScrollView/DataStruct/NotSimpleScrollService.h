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
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ACCOUNTFORPREPOSITION_OFFSET UNITYSDK_OFFSET(0x1287EB60)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_BEGINGROUPNOTIFICATIONBATCH_OFFSET UNITYSDK_OFFSET(0x1287E850)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_CALGROUPREBINDDISTANCE_OFFSET UNITYSDK_OFFSET(0x128834E0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_CALLOOPCOUNTBYPERROWSIZE_OFFSET UNITYSDK_OFFSET(0x12884930)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_CALLOOPCOUNTBYUNIFORMSIZE_OFFSET UNITYSDK_OFFSET(0x12884F60)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_CALSELECTALIGNTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x12880740)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_CHECKFORLOOP_OFFSET UNITYSDK_OFFSET(0x1287F9E0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_DOMOVESCROLLBAR_OFFSET UNITYSDK_OFFSET(0x12884420)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ENDGROUPNOTIFICATIONBATCH_OFFSET UNITYSDK_OFFSET(0x1287E890)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GETAVGITEMSIZE_OFFSET UNITYSDK_OFFSET(0x1287FBC0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GETCUSTOMRANGEBYBOUNDS_OFFSET UNITYSDK_OFFSET(0x12880B00)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GETCUSTOMRANGEBYINDEX_OFFSET UNITYSDK_OFFSET(0x12880A20)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GETCUSTOMRANGEBYRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12880A90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1287F900)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x1287EB40)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1287EB20)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_INITSCROLL_OFFSET UNITYSDK_OFFSET(0x1287EDD0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ISMOVETOEND_OFFSET UNITYSDK_OFFSET(0x12880860)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_MOVEBYSHORTDISTANCE_OFFSET UNITYSDK_OFFSET(0x128841F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_MOVESCROLLEX_OFFSET UNITYSDK_OFFSET(0x1287F2D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_MOVESCROLLINNER_OFFSET UNITYSDK_OFFSET(0x1287F3F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_NOTIFYGROUPMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1287EC70)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_NOTIFYMOVESCROLLSTEP_OFFSET UNITYSDK_OFFSET(0x12884580)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_NOTIFYSCROLLVIEWITEMMOVE_OFFSET UNITYSDK_OFFSET(0x12885000)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ONSCROLLBARPOINTERDOWNEXTRA_OFFSET UNITYSDK_OFFSET(0x1287F140)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ONSCROLLBARPOINTERUPEXTRA_OFFSET UNITYSDK_OFFSET(0x1287F1E0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ONSCROLLVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x128831B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_REBINDVISIBLEITEMSFORLOOPMOVE_OFFSET UNITYSDK_OFFSET(0x12883910)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOBOTTOMWITHANIM_OFFSET UNITYSDK_OFFSET(0x12880E50)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOBOTTOMWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x128814B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOCONTENTBOTTOMWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x12881180)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOCONTENTTOPWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x12881F90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOEND_OFFSET UNITYSDK_OFFSET(0x12880B90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOSHOWTARGETWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x128805C0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOSHOWWORLDRECT_OFFSET UNITYSDK_OFFSET(0x128808E0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOSTART_OFFSET UNITYSDK_OFFSET(0x12880CF0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOTARGETWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x12882DC0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x12880650)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOTOPWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x128822B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_1_OFFSET UNITYSDK_OFFSET(0x12880480)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_2_OFFSET UNITYSDK_OFFSET(0x12880510)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_OFFSET UNITYSDK_OFFSET(0x12880410)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SIMULATIONDAMPIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x12883140)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SIMULATIONDRAG_OFFSET UNITYSDK_OFFSET(0x12882E90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SIMULATIONGRIDALIGN_OFFSET UNITYSDK_OFFSET(0x128830C0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1287EDB0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE___BASE_ONSCROLLBARPOINTERDOWNEXTRA_OFFSET UNITYSDK_OFFSET(0x12885460)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE___BASE_ONSCROLLBARPOINTERUPEXTRA_OFFSET UNITYSDK_OFFSET(0x12885470)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleScrollService_TypeDefinitionIndex = 92491;

	class NotSimpleScrollService
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x20
		::System::Int32 _groupNotificationDepth; // 0x28
		::System::Single _originalScrollSize; // 0x2C
		::System::Single _pendingGroupDelta; // 0x30

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE__CTOR_OFFSET))(this, services);
		}

		::System::Void BeginGroupNotificationBatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_BEGINGROUPNOTIFICATIONBATCH_OFFSET))(this);
		}

		::System::Void EndGroupNotificationBatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ENDGROUPNOTIFICATIONBATCH_OFFSET))(this);
		}

		::System::Void AccountForPrePosition(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ACCOUNTFORPREPOSITION_OFFSET))(this, delta);
		}

		::System::Void NotifyGroupMovement(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_NOTIFYGROUPMOVEMENT_OFFSET))(this, delta);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GET_LOGIC_OFFSET))(this);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GET_OWNER_OFFSET))(this);
		}

		::System::Void InitScroll(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_INITSCROLL_OFFSET))(this, force);
		}

		::System::Void OnScrollBarPointerDownExtra(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ONSCROLLBARPOINTERDOWNEXTRA_OFFSET))(this, eventData);
		}

		::System::Void OnScrollBarPointerUpExtra(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ONSCROLLBARPOINTERUPEXTRA_OFFSET))(this, eventData);
		}

		::System::Void MoveScrollEx(::NAPScrollView::DataStruct::MoveContext moveContext)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_MOVESCROLLEX_OFFSET))(this, moveContext);
		}

		::System::Single get_CurrentPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GET_CURRENTPOSITION_OFFSET))(this);
		}

		::System::Boolean CheckForLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_CHECKFORLOOP_OFFSET))(this);
		}

		::System::Single GetAvgItemSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GETAVGITEMSIZE_OFFSET))(this);
		}

		::System::Void SetInitPendingScrollTarget(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_OFFSET))(this, dataIndex);
		}

		::System::Void SetInitPendingScrollTarget_1(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_1_OFFSET))(this, dataIndex, toEnd, fromDataIndex);
		}

		::System::Void SetInitPendingScrollTarget_2(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex, ::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType alignParamType, ::MonoUITableScrollV2_ScrollParams_AlignParam* overrideAlignParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>, ::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SETINITPENDINGSCROLLTARGET_2_OFFSET))(this, dataIndex, toEnd, fromDataIndex, alignParamType, overrideAlignParam);
		}

		::System::Void ScrollToShowTargetWithoutAnim(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOSHOWTARGETWITHOUTANIM_OFFSET))(this, dataIndex, toEnd, fromDataIndex);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToTarget(::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOTARGET_OFFSET))(this, context);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalSelectAlignTargetPosition(::NAPScrollView::DataStruct::ScrollFloat start, ::NAPScrollView::DataStruct::ScrollFloat end, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_CALSELECTALIGNTARGETPOSITION_OFFSET))(this, start, end, alignParam);
		}

		::System::Nullable_1<::System::Boolean> IsMoveToEnd(::System::Int32 toIndex, ::System::Nullable_1<::System::Int32> fromIndex)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ISMOVETOEND_OFFSET))(this, toIndex, fromIndex);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToShowWorldRect(::UnityEngine::Vector3 worldPointA, ::UnityEngine::Vector3 worldPointB, ::System::Boolean hasAnim, ::System::Single padding)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOSHOWWORLDRECT_OFFSET))(this, worldPointA, worldPointB, hasAnim, padding);
		}

		::UnityEngine::Vector2 GetCustomRangeByIndex(::System::Int32 dataIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GETCUSTOMRANGEBYINDEX_OFFSET))(this, dataIndex);
		}

		::UnityEngine::Vector2 GetCustomRangeByRectTransform(::UnityEngine::RectTransform* trans)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GETCUSTOMRANGEBYRECTTRANSFORM_OFFSET))(this, trans);
		}

		::UnityEngine::Vector2 GetCustomRangeByBounds(::UnityEngine::Bounds bounds)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_GETCUSTOMRANGEBYBOUNDS_OFFSET))(this, bounds);
		}

		::System::Void ScrollToEnd(::System::Boolean hasAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOEND_OFFSET))(this, hasAnim);
		}

		::System::Void ScrollToStart(::System::Boolean hasAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOSTART_OFFSET))(this, hasAnim);
		}

		::System::Void ScrollToBottomWithAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOBOTTOMWITHANIM_OFFSET))(this);
		}

		::System::Void ScrollToContentBottomWithoutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOCONTENTBOTTOMWITHOUTANIM_OFFSET))(this);
		}

		::System::Void ScrollToBottomWithoutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOBOTTOMWITHOUTANIM_OFFSET))(this);
		}

		::System::Void ScrollToContentTopWithoutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOCONTENTTOPWITHOUTANIM_OFFSET))(this);
		}

		::System::Void ScrollToTopWithoutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOTOPWITHOUTANIM_OFFSET))(this);
		}

		::System::Void ScrollToTargetWithoutAnim(::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SCROLLTOTARGETWITHOUTANIM_OFFSET))(this, context);
		}

		::System::Void SimulationDrag(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SIMULATIONDRAG_OFFSET))(this, delta);
		}

		::System::Void SimulationGridAlign(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SIMULATIONGRIDALIGN_OFFSET))(this, delta);
		}

		::System::Void SimulationDampImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_SIMULATIONDAMPIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnScrollValueChanged(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_ONSCROLLVALUECHANGED_OFFSET))(this, v);
		}

		::System::Void MoveScrollInner(::NAPScrollView::DataStruct::MoveContext moveContext)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_MOVESCROLLINNER_OFFSET))(this, moveContext);
		}

		::System::Void DoMoveScrollBar(::NAPScrollView::DataStruct::MoveContext moveContext)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_DOMOVESCROLLBAR_OFFSET))(this, moveContext);
		}

		::System::Single CalGroupRebindDistance(::System::Single delta, ::System::Single viewSize, ::System::Int32& rowsToSkip)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_CALGROUPREBINDDISTANCE_OFFSET))(this, delta, viewSize, rowsToSkip);
		}

		::System::Boolean RebindVisibleItemsForLoopMove(::System::Single delta, ::System::Int32 rowCountOverride)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_REBINDVISIBLEITEMSFORLOOPMOVE_OFFSET))(this, delta, rowCountOverride);
		}

		::System::Void MoveByShortDistance(::NAPScrollView::DataStruct::MoveContext moveContext)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_MOVEBYSHORTDISTANCE_OFFSET))(this, moveContext);
		}

		::System::Int32 CalLoopCountByPerRowSize(::System::Single absDelta, ::System::Int32 sign)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_CALLOOPCOUNTBYPERROWSIZE_OFFSET))(this, absDelta, sign);
		}

		::System::Int32 CalLoopCountByUniformSize(::System::Single absDelta)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_CALLOOPCOUNTBYUNIFORMSIZE_OFFSET))(this, absDelta);
		}

		::System::Void NotifyMoveScrollStep(::NAPScrollView::DataStruct::MoveContext moveContext)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_NOTIFYMOVESCROLLSTEP_OFFSET))(this, moveContext);
		}

		::System::Void NotifyScrollViewItemMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE_NOTIFYSCROLLVIEWITEMMOVE_OFFSET))(this);
		}

		::System::Void __base_OnScrollBarPointerDownExtra(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE___BASE_ONSCROLLBARPOINTERDOWNEXTRA_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollBarPointerUpExtra(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLSERVICE___BASE_ONSCROLLBARPOINTERUPEXTRA_OFFSET))(this, P0);
		}
	};
}

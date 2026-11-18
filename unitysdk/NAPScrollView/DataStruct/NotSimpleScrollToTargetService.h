#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext_AlignParamType.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext_ScrollDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NAPScrollView/DataStruct/NotSimpleScrollToTargetService___c__DisplayClass64_0.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollBounds.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetResult.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace NAPScrollView::DataStruct { class ScrollViewRuntimeState; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_CALSELECTALIGNTARGETPOSITION_1_OFFSET UNITYSDK_OFFSET(0x12C4A1F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_CALSELECTALIGNTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x12C45960)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_CLAMPALIGNDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C442E0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_CLEARPENDINGTARGET_OFFSET UNITYSDK_OFFSET(0x12C3FE00)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_CONSUMEPENDINGTARGET_OFFSET UNITYSDK_OFFSET(0x12C47E00)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_DATAINDEXTOVECTOR_OFFSET UNITYSDK_OFFSET(0x12C3E500)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETALIGNDATAINDEXFORCENTER_OFFSET UNITYSDK_OFFSET(0x12C4A0B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETALIGNDATAINDEXFORVISIBLE_OFFSET UNITYSDK_OFFSET(0x12C49FB0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETCUSTOMRANGEBYBOUNDS_OFFSET UNITYSDK_OFFSET(0x12C47C80)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETCUSTOMRANGEBYINDEX_OFFSET UNITYSDK_OFFSET(0x12C475B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETCUSTOMRANGEBYRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12C47AC0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETCUSTOMRANGEBYSCROLLBOUNDS_OFFSET UNITYSDK_OFFSET(0x12C47710)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETREALALIGNDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C44130)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETREALTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12C45180)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETSCROLLDISTANCE_OFFSET UNITYSDK_OFFSET(0x12C4A140)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETWINDOWITEMDISTANCE_OFFSET UNITYSDK_OFFSET(0x12C45850)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET_AUTOFORLOOP_OFFSET UNITYSDK_OFFSET(0x12C415C0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET_HASPENDINGTARGET_OFFSET UNITYSDK_OFFSET(0x12C3FC20)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET_PENDINGTARGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C3FDC0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET_RT_OFFSET UNITYSDK_OFFSET(0x12C3F760)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__CONSOLESCROLLTOEND_OFFSET UNITYSDK_OFFSET(0x12C3F910)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__SCROLLALIGNPARAMTYPE_OFFSET UNITYSDK_OFFSET(0x12C3FA90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__SCROLLDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C3F790)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__SCROLLFROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C3F9D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__SCROLLOVERRIDEALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x12C3FB50)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__SCROLLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12C3F850)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_ISMOVETOEND_OFFSET UNITYSDK_OFFSET(0x12C493E0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_JUDGEALIGNDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C497D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_REBINDVISIBLEWINDOWDATA_OFFSET UNITYSDK_OFFSET(0x12C458F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_RESOLVEALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x12C432D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_RESOLVEALIGNTOREALVIEWEDGE_OFFSET UNITYSDK_OFFSET(0x12C42DE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_RESOLVESCROLLTOEND_OFFSET UNITYSDK_OFFSET(0x12C453F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_ROUNDDATAINDEXNEAREST_OFFSET UNITYSDK_OFFSET(0x12C491B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_ROUNDDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C3E350)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOEND_OFFSET UNITYSDK_OFFSET(0x12C46410)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOSHOWTARGETWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x12C409A0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOSHOWWORLDRECT_OFFSET UNITYSDK_OFFSET(0x12C46C30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOSTART_OFFSET UNITYSDK_OFFSET(0x12C46820)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGETAUTOFORLOOP_OFFSET UNITYSDK_OFFSET(0x12C42330)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGETINDEXINNER_OFFSET UNITYSDK_OFFSET(0x12C45A00)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGETINDEX_OFFSET UNITYSDK_OFFSET(0x12C45090)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGETINNER_OFFSET UNITYSDK_OFFSET(0x12C434F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGETLEGACY_OFFSET UNITYSDK_OFFSET(0x12C418C0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x12C40C10)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SETINITPENDINGSCROLLTARGET_1_OFFSET UNITYSDK_OFFSET(0x12C40290)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SETINITPENDINGSCROLLTARGET_2_OFFSET UNITYSDK_OFFSET(0x12C40630)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SETINITPENDINGSCROLLTARGET_OFFSET UNITYSDK_OFFSET(0x12C40150)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__CONSOLESCROLLTOEND_OFFSET UNITYSDK_OFFSET(0x12C3F950)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__SCROLLALIGNPARAMTYPE_OFFSET UNITYSDK_OFFSET(0x12C3FAD0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__SCROLLDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C3F7D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__SCROLLFROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C3FA10)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__SCROLLOVERRIDEALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x12C3FB90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__SCROLLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12C3F890)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_TOENDVALUE_OFFSET UNITYSDK_OFFSET(0x12C41860)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_TOSCROLLDIRECTION_OFFSET UNITYSDK_OFFSET(0x12C40BB0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_TRYCONSUMEPIVOTALIGN_OFFSET UNITYSDK_OFFSET(0x12C48490)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_TRYFORLOOPPREPOSITION_OFFSET UNITYSDK_OFFSET(0x12C44500)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITIONCENTER_64_0_OFFSET UNITYSDK_OFFSET(0x12C4ADF0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITIONCUSTOMRANGE_64_2_OFFSET UNITYSDK_OFFSET(0x12C4B040)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITIONVISIBLE_64_1_OFFSET UNITYSDK_OFFSET(0x12C4A860)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C3FC10)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleScrollToTargetService_TypeDefinitionIndex = 72185;

	class NotSimpleScrollToTargetService : public ::System::Object
	{
	public:
		// static const ::System::Single LoopShiftThresholdScreens; // 0x0
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE__CTOR_OFFSET))(this, services);
		}

		::NAPScrollView::DataStruct::ScrollViewRuntimeState* get_Rt()
		{
			return ((::NAPScrollView::DataStruct::ScrollViewRuntimeState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET_RT_OFFSET))(this);
		}

		::System::Int32 get__scrollDataIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__SCROLLDATAINDEX_OFFSET))(this);
		}

		::System::Void set__scrollDataIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__SCROLLDATAINDEX_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get__scrollTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__SCROLLTRANSFORM_OFFSET))(this);
		}

		::System::Void set__scrollTransform(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__SCROLLTRANSFORM_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get__consoleScrollToEnd()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__CONSOLESCROLLTOEND_OFFSET))(this);
		}

		::System::Void set__consoleScrollToEnd(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__CONSOLESCROLLTOEND_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get__scrollFromDataIndex()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__SCROLLFROMDATAINDEX_OFFSET))(this);
		}

		::System::Void set__scrollFromDataIndex(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__SCROLLFROMDATAINDEX_OFFSET))(this, value);
		}

		::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType get__scrollAlignParamType()
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__SCROLLALIGNPARAMTYPE_OFFSET))(this);
		}

		::System::Void set__scrollAlignParamType(::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType value)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__SCROLLALIGNPARAMTYPE_OFFSET))(this, value);
		}

		::MonoUITableScrollV2_ScrollParams_AlignParam* get__scrollOverrideAlignParam()
		{
			return ((::MonoUITableScrollV2_ScrollParams_AlignParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET__SCROLLOVERRIDEALIGNPARAM_OFFSET))(this);
		}

		::System::Void set__scrollOverrideAlignParam(::MonoUITableScrollV2_ScrollParams_AlignParam* value)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SET__SCROLLOVERRIDEALIGNPARAM_OFFSET))(this, value);
		}

		::System::Boolean get_HasPendingTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET_HASPENDINGTARGET_OFFSET))(this);
		}

		::System::Int32 get_PendingTargetDataIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET_PENDINGTARGETDATAINDEX_OFFSET))(this);
		}

		::System::Void ClearPendingTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_CLEARPENDINGTARGET_OFFSET))(this);
		}

		::System::Void SetInitPendingScrollTarget(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SETINITPENDINGSCROLLTARGET_OFFSET))(this, dataIndex);
		}

		::System::Void SetInitPendingScrollTarget_1(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SETINITPENDINGSCROLLTARGET_1_OFFSET))(this, dataIndex, toEnd, fromDataIndex);
		}

		::System::Void SetInitPendingScrollTarget_2(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex, ::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType alignParamType, ::MonoUITableScrollV2_ScrollParams_AlignParam* overrideAlignParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>, ::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SETINITPENDINGSCROLLTARGET_2_OFFSET))(this, dataIndex, toEnd, fromDataIndex, alignParamType, overrideAlignParam);
		}

		::System::Void ScrollToShowTargetWithoutAnim(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOSHOWTARGETWITHOUTANIM_OFFSET))(this, dataIndex, toEnd, fromDataIndex);
		}

		::System::Boolean get_AutoForLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GET_AUTOFORLOOP_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToTarget(::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGET_OFFSET))(this, context);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToTargetAutoForLoop(::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGETAUTOFORLOOP_OFFSET))(this, context);
		}

		::System::Void TryForLoopPrePosition(::System::Int32 targetDataIndex, ::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_TRYFORLOOPPREPOSITION_OFFSET))(this, targetDataIndex, context);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToTargetIndex(::System::Int32 targetIndex, ::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::System::Int32, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGETINDEX_OFFSET))(this, targetIndex, context);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToTargetIndexInner(::System::Int32 targetIndex, ::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::System::Int32, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGETINDEXINNER_OFFSET))(this, targetIndex, context);
		}

		::UnityEngine::RectTransform* GetRealTargetTransform(::System::Int32 dataIndex)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETREALTARGETTRANSFORM_OFFSET))(this, dataIndex);
		}

		::System::Void RebindVisibleWindowData(::System::Int32 dataIndexDelta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_REBINDVISIBLEWINDOWDATA_OFFSET))(this, dataIndexDelta);
		}

		static ::System::Int32 GetWindowItemDistance(::System::Int32 front, ::System::Int32 back, ::System::Int32 target, ::System::Int32 count, ::System::Boolean loop, ::System::Boolean toEnd)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETWINDOWITEMDISTANCE_OFFSET))(front, back, target, count, loop, toEnd);
		}

		::System::Boolean ResolveScrollToEnd(::NAPScrollView::DataStruct::ScrollToTargetContext context, ::System::Int32 targetIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_RESOLVESCROLLTOEND_OFFSET))(this, context, targetIndex);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToTargetLegacy(::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGETLEGACY_OFFSET))(this, context);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToEnd(::System::Boolean hasAnim)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOEND_OFFSET))(this, hasAnim);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToStart(::System::Boolean hasAnim)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOSTART_OFFSET))(this, hasAnim);
		}

		::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToShowWorldRect(::UnityEngine::Vector3 worldPointA, ::UnityEngine::Vector3 worldPointB, ::System::Boolean hasAnim, ::System::Single padding)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOSHOWWORLDRECT_OFFSET))(this, worldPointA, worldPointB, hasAnim, padding);
		}

		::UnityEngine::Vector2 GetCustomRangeByIndex(::System::Int32 dataIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETCUSTOMRANGEBYINDEX_OFFSET))(this, dataIndex);
		}

		::UnityEngine::Vector2 GetCustomRangeByRectTransform(::UnityEngine::RectTransform* trans)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETCUSTOMRANGEBYRECTTRANSFORM_OFFSET))(this, trans);
		}

		::UnityEngine::Vector2 GetCustomRangeByBounds(::UnityEngine::Bounds bounds)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETCUSTOMRANGEBYBOUNDS_OFFSET))(this, bounds);
		}

		::UnityEngine::Vector2 GetCustomRangeByScrollBounds(::NAPScrollView::DataStruct::ScrollBounds bounds)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollBounds))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETCUSTOMRANGEBYSCROLLBOUNDS_OFFSET))(this, bounds);
		}

		::System::Void ConsumePendingTarget(::System::Boolean hasAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_CONSUMEPENDINGTARGET_OFFSET))(this, hasAnim);
		}

		::System::Boolean TryConsumePivotAlign(::System::Boolean hasAnim)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_TRYCONSUMEPIVOTALIGN_OFFSET))(this, hasAnim);
		}

		::System::Int32 RoundDataIndexNearest(::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_ROUNDDATAINDEXNEAREST_OFFSET))(this, from, to);
		}

		::System::Int32 RoundDataIndex(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_ROUNDDATAINDEX_OFFSET))(this, dataIndex);
		}

		::System::Int32 ClampAlignDataIndex(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_CLAMPALIGNDATAINDEX_OFFSET))(this, dataIndex);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> DataIndexToVector(::System::Int32 dataIndex)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_DATAINDEXTOVECTOR_OFFSET))(this, dataIndex);
		}

		::System::Nullable_1<::System::Boolean> IsMoveToEnd(::System::Int32 toIndex, ::System::Nullable_1<::System::Int32> fromIndex)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_ISMOVETOEND_OFFSET))(this, toIndex, fromIndex);
		}

		::System::Int32 GetRealAlignDataIndex(::System::Int32 dataIndex, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETREALALIGNDATAINDEX_OFFSET))(this, dataIndex, alignParam);
		}

		::System::Int32 JudgeAlignDataIndex(::System::Int32 dataIndex, ::System::Int32 prevDataIndex, ::System::Int32 nextDataIndex, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_JUDGEALIGNDATAINDEX_OFFSET))(this, dataIndex, prevDataIndex, nextDataIndex, alignParam);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetAlignDataIndexForVisible(::System::Int32 prevDataIndex, ::System::Int32 nextDataIndex, ::System::Int32 start, ::System::Int32 end, ::System::Int32 dataIndex)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETALIGNDATAINDEXFORVISIBLE_OFFSET))(this, prevDataIndex, nextDataIndex, start, end, dataIndex);
		}

		::System::Int32 GetScrollDistance(::System::Int32 dataIndex, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETSCROLLDISTANCE_OFFSET))(this, dataIndex, start, end);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetAlignDataIndexForCenter(::System::Int32 prevDataIndex, ::System::Int32 nextDataIndex, ::System::Int32 center)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_GETALIGNDATAINDEXFORCENTER_OFFSET))(this, prevDataIndex, nextDataIndex, center);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalSelectAlignTargetPosition(::NAPScrollView::DataStruct::ScrollFloat start, ::NAPScrollView::DataStruct::ScrollFloat end, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_CALSELECTALIGNTARGETPOSITION_OFFSET))(this, start, end, alignParam);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalSelectAlignTargetPosition_1(::NAPScrollView::DataStruct::ScrollFloat start, ::NAPScrollView::DataStruct::ScrollFloat end, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::System::Boolean alignToRealViewEdge)
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_CALSELECTALIGNTARGETPOSITION_1_OFFSET))(this, start, end, alignParam, alignToRealViewEdge);
		}

		::System::Void ScrollToTargetInner(::NAPScrollView::DataStruct::ScrollFloat start, ::NAPScrollView::DataStruct::ScrollFloat end, ::System::Boolean withAnim, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::NAPScrollView::DataStruct::ScrollToTargetResult& result, ::System::Boolean alignToRealViewEdge)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Boolean, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::NAPScrollView::DataStruct::ScrollToTargetResult&, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_SCROLLTOTARGETINNER_OFFSET))(this, start, end, withAnim, alignParam, result, alignToRealViewEdge);
		}

		::System::Boolean ResolveAlignToRealViewEdge(::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_RESOLVEALIGNTOREALVIEWEDGE_OFFSET))(this, context);
		}

		::MonoUITableScrollV2_ScrollParams_AlignParam* ResolveAlignParam(::NAPScrollView::DataStruct::ScrollToTargetContext context)
		{
			return ((::MonoUITableScrollV2_ScrollParams_AlignParam*(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_RESOLVEALIGNPARAM_OFFSET))(this, context);
		}

		static ::System::Nullable_1<::System::Boolean> ToEndValue(::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection direction)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_TOENDVALUE_OFFSET))(direction);
		}

		static ::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection ToScrollDirection(::System::Nullable_1<::System::Boolean> toEnd)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection(*)(::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE_TOSCROLLDIRECTION_OFFSET))(toEnd);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPosition_g__CalAlignTargetPositionCenter_64_0(::NAPScrollView::DataStruct::NotSimpleScrollToTargetService___c__DisplayClass64_0& param_0)
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollToTargetService___c__DisplayClass64_0&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITIONCENTER_64_0_OFFSET))(this, param_0);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPosition_g__CalAlignTargetPositionVisible_64_1(::NAPScrollView::DataStruct::NotSimpleScrollToTargetService___c__DisplayClass64_0& param_0)
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollToTargetService___c__DisplayClass64_0&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITIONVISIBLE_64_1_OFFSET))(this, param_0);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPosition_g__CalAlignTargetPositionCustomRange_64_2(::NAPScrollView::DataStruct::NotSimpleScrollToTargetService___c__DisplayClass64_0& param_0)
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollToTargetService___c__DisplayClass64_0&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLTOTARGETSERVICE__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITIONCUSTOMRANGE_64_2_OFFSET))(this, param_0);
		}
	};
}

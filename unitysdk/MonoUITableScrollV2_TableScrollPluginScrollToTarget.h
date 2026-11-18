#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext_ScrollDirection.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass28_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass34_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass37_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass42_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass43_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass44_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetResult.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace NAPScrollView::DataStruct { class IScrollViewLogicService; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_CALSELECTALIGNTARGETPOSITIONV2_OFFSET UNITYSDK_OFFSET(0x113A16B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_CHECKSCROLLDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1139C370)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_DEBUGLOG_OFFSET UNITYSDK_OFFSET(0x1139D250)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GETREALALIGNDATAINDEXV2_OFFSET UNITYSDK_OFFSET(0x1139E360)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GETREALALIGNRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1139FA90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_CANNOTMOVERUNTIME_OFFSET UNITYSDK_OFFSET(0x11399860)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_ISDRAGGINGSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x11399A30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x11399950)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x11399850)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_LOOPSCROLL_OFFSET UNITYSDK_OFFSET(0x11399690)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_MANUALMODE_OFFSET UNITYSDK_OFFSET(0x11399CD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_M_INITED_OFFSET UNITYSDK_OFFSET(0x11399B10)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_RAWDATACOUNT_OFFSET UNITYSDK_OFFSET(0x11399BF0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_SIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x11399770)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__CONSOLESCROLLTOEND_OFFSET UNITYSDK_OFFSET(0x113A41D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__CURRENTSELECTALIGNTARGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11399290)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__CURRENTSELECTALIGNTARGETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11399490)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1139C160)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLFROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1139C9E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1139C180)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_JUDGEALIGNDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1139E470)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONAFTERREFRESHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1139AF50)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONCLEARALLITEMDATAS_OFFSET UNITYSDK_OFFSET(0x11399020)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONINITDATA_OFFSET UNITYSDK_OFFSET(0x11398FE0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONSELECTITEMWHENNOTINIT_OFFSET UNITYSDK_OFFSET(0x1139C200)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1139A4F0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGETWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x1139CBB0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGET_1_OFFSET UNITYSDK_OFFSET(0x1139CDC0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGET_OFFSET UNITYSDK_OFFSET(0x1139CA00)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNERWITHOUTALIGNDATAINDEXOFFSET_1_OFFSET UNITYSDK_OFFSET(0x113A06B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNERWITHOUTALIGNDATAINDEXOFFSET_OFFSET UNITYSDK_OFFSET(0x113A0350)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_1_OFFSET UNITYSDK_OFFSET(0x1139F700)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_2_OFFSET UNITYSDK_OFFSET(0x1139EE20)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_OFFSET UNITYSDK_OFFSET(0x1139D8F0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x11399DC0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__CONSOLESCROLLTOEND_OFFSET UNITYSDK_OFFSET(0x113991D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__CURRENTSELECTALIGNTARGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11399370)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__CURRENTSELECTALIGNTARGETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11399570)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11399170)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLFROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11399230)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1139C1A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_CENTER_45_0_OFFSET UNITYSDK_OFFSET(0x113A21B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_CUSTOMRANGE_45_4_OFFSET UNITYSDK_OFFSET(0x113A25D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_VISIBLE_45_3_OFFSET UNITYSDK_OFFSET(0x113A1810)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALGRIDALIGNTARGETPOSITION_END_45_2_OFFSET UNITYSDK_OFFSET(0x113A3E00)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALGRIDALIGNTARGETPOSITION_START_45_1_OFFSET UNITYSDK_OFFSET(0x113A3A30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CHECKSCROLLDATAINDEX_G__GETSCROLLDIRECTION_32_0_OFFSET UNITYSDK_OFFSET(0x1139C9A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x11398F60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNDATAINDEXV2_G__GETNEXTINDEX_43_1_OFFSET UNITYSDK_OFFSET(0x113A1320)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNDATAINDEXV2_G__GETPREVINDEX_43_0_OFFSET UNITYSDK_OFFSET(0x113A1160)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__ISMOVETOENDV2_42_0_OFFSET UNITYSDK_OFFSET(0x113A0E70)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECTBYOFFSET_42_3_OFFSET UNITYSDK_OFFSET(0x113A1060)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECTINNER_42_2_OFFSET UNITYSDK_OFFSET(0x113A42E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECT_42_1_OFFSET UNITYSDK_OFFSET(0x113A4210)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETALIGNDATAINDEX_44_0_OFFSET UNITYSDK_OFFSET(0x113A14E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETALIGNDATAINDEX_44_2_OFFSET UNITYSDK_OFFSET(0x113A1670)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETSCROLLDISTANCE_44_1_OFFSET UNITYSDK_OFFSET(0x113A4390)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOSHOWTARGETWITHOUTANIM_G__GETSCROLLDIRECTION_34_0_OFFSET UNITYSDK_OFFSET(0x1139CDA0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGETINNER_G__GETDISTANCETOVISIBLE_37_1_OFFSET UNITYSDK_OFFSET(0x113A41F0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGETINNER_G__GETNEARESTDATAINDEX_37_0_OFFSET UNITYSDK_OFFSET(0x1139ED80)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGET_G__INNER_28_0_OFFSET UNITYSDK_OFFSET(0x1139A2E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET___BASE_ONCLEARALLITEMDATAS_OFFSET UNITYSDK_OFFSET(0x113A4610)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET___BASE_ONINITDATA_OFFSET UNITYSDK_OFFSET(0x113A46A0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginScrollToTarget_TypeDefinitionIndex = 40102;

class MonoUITableScrollV2_TableScrollPluginScrollToTarget : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Boolean _tempParamFor1_0; // 0x18

	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CTOR_OFFSET))(this, pluginServices);
	}

	::System::Void OnInitData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONINITDATA_OFFSET))(this);
	}

	::System::Void OnClearAllItemDatas()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONCLEARALLITEMDATAS_OFFSET))(this);
	}

	::System::Int32 get__currentSelectAlignTargetDataIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__CURRENTSELECTALIGNTARGETDATAINDEX_OFFSET))(this);
	}

	::System::Void set__currentSelectAlignTargetDataIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__CURRENTSELECTALIGNTARGETDATAINDEX_OFFSET))(this, value);
	}

	::UnityEngine::RectTransform* get__currentSelectAlignTargetRectTransform()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__CURRENTSELECTALIGNTARGETRECTTRANSFORM_OFFSET))(this);
	}

	::System::Void set__currentSelectAlignTargetRectTransform(::UnityEngine::RectTransform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__CURRENTSELECTALIGNTARGETRECTTRANSFORM_OFFSET))(this, value);
	}

	::System::Boolean get_LoopScroll()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_LOOPSCROLL_OFFSET))(this);
	}

	::System::Boolean get_SimpleMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_SIMPLEMODE_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewLogicService* get_logic()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewLogicService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_LOGIC_OFFSET))(this);
	}

	::System::Boolean get_CanNotMoveRuntime()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_CANNOTMOVERUNTIME_OFFSET))(this);
	}

	::System::Boolean get_isDragging()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_ISDRAGGING_OFFSET))(this);
	}

	::System::Boolean get_isDraggingScrollBar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_ISDRAGGINGSCROLLBAR_OFFSET))(this);
	}

	::System::Boolean get_m_inited()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_M_INITED_OFFSET))(this);
	}

	::System::Int32 get_rawDataCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_RAWDATACOUNT_OFFSET))(this);
	}

	::System::Boolean get_ManualMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_MANUALMODE_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollToTargetResult ScrollToTarget(::NAPScrollView::DataStruct::ScrollToTargetContext context)
	{
		return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGET_OFFSET))(this, context);
	}

	::NAPScrollView::DataStruct::ScrollToTargetResult ScrollDelta(::System::Single delta, ::System::Boolean hasAnim)
	{
		return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLDELTA_OFFSET))(this, delta, hasAnim);
	}

	::System::Void OnAfterRefreshGameObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONAFTERREFRESHGAMEOBJECT_OFFSET))(this);
	}

	::System::Void OnSelectItemWhenNotInit(::System::Int32 dataIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONSELECTITEMWHENNOTINIT_OFFSET))(this, dataIndex);
	}

	::System::Void CheckScrollDataIndex()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_CHECKSCROLLDATAINDEX_OFFSET))(this);
	}

	::System::Void ScrollToShowTarget(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGET_OFFSET))(this, dataIndex, toEnd, fromDataIndex);
	}

	::System::Void ScrollToShowTargetWithoutAnim(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGETWITHOUTANIM_OFFSET))(this, dataIndex, toEnd, fromDataIndex);
	}

	::System::Void ScrollToShowTarget_1(::UnityEngine::RectTransform* trans)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGET_1_OFFSET))(this, trans);
	}

	::System::Void DebugLog(::NAPScrollView::DataStruct::ScrollToTargetContext& context, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::NAPScrollView::DataStruct::ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext&, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::NAPScrollView::DataStruct::ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_DEBUGLOG_OFFSET))(this, context, alignParam, scrollToTargetResult);
	}

	::System::Void ScrollToTargetInner(::NAPScrollView::DataStruct::ScrollToTargetContext context, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::NAPScrollView::DataStruct::ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::NAPScrollView::DataStruct::ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_OFFSET))(this, context, alignParam, scrollToTargetResult);
	}

	::System::Void ScrollToTargetInner_1(::UnityEngine::RectTransform* rectTransform, ::System::Boolean withAnim, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::NAPScrollView::DataStruct::ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::NAPScrollView::DataStruct::ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_1_OFFSET))(this, rectTransform, withAnim, alignParam, scrollToTargetResult);
	}

	::System::Void ScrollToTargetInnerWithoutAlignDataIndexOffset(::UnityEngine::RectTransform* rectTransform, ::System::Boolean withAnim, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::NAPScrollView::DataStruct::ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::NAPScrollView::DataStruct::ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNERWITHOUTALIGNDATAINDEXOFFSET_OFFSET))(this, rectTransform, withAnim, alignParam, scrollToTargetResult);
	}

	::System::Void ScrollToTargetInnerWithoutAlignDataIndexOffset_1(::NAPScrollView::DataStruct::ScrollToTargetContext context, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::NAPScrollView::DataStruct::ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::NAPScrollView::DataStruct::ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNERWITHOUTALIGNDATAINDEXOFFSET_1_OFFSET))(this, context, alignParam, scrollToTargetResult);
	}

	::System::Void ScrollToTargetInner_2(::NAPScrollView::DataStruct::ScrollFloat start, ::NAPScrollView::DataStruct::ScrollFloat end, ::System::Boolean withAnim, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::NAPScrollView::DataStruct::ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Boolean, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::NAPScrollView::DataStruct::ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_2_OFFSET))(this, start, end, withAnim, alignParam, scrollToTargetResult);
	}

	::UnityEngine::RectTransform* GetRealAlignRectTransform(::UnityEngine::RectTransform* rectTransform, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID, ::UnityEngine::RectTransform*, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GETREALALIGNRECTTRANSFORM_OFFSET))(this, rectTransform, alignParam);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> GetRealAlignDataIndexV2(::System::Int32 dataIndex, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GETREALALIGNDATAINDEXV2_OFFSET))(this, dataIndex, alignParam);
	}

	::System::Int32 JudgeAlignDataIndex(::System::Int32 dataIndex, ::System::Int32 prevDataIndex, ::System::Int32 nextDataIndex, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_JUDGEALIGNDATAINDEX_OFFSET))(this, dataIndex, prevDataIndex, nextDataIndex, alignParam);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalSelectAlignTargetPositionV2(::NAPScrollView::DataStruct::ScrollFloat start, ::NAPScrollView::DataStruct::ScrollFloat end, ::NAPScrollView::DataStruct::ScrollFloat startOffset, ::NAPScrollView::DataStruct::ScrollFloat endOffset, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_CALSELECTALIGNTARGETPOSITIONV2_OFFSET))(this, start, end, startOffset, endOffset, alignParam);
	}

	::System::Int32 get__scrollDataIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLDATAINDEX_OFFSET))(this);
	}

	::System::Void set__scrollDataIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLDATAINDEX_OFFSET))(this, value);
	}

	::UnityEngine::RectTransform* get__scrollTransform()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLTRANSFORM_OFFSET))(this);
	}

	::System::Void set__scrollTransform(::UnityEngine::RectTransform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLTRANSFORM_OFFSET))(this, value);
	}

	::System::Nullable_1<::System::Boolean> get__consoleScrollToEnd()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__CONSOLESCROLLTOEND_OFFSET))(this);
	}

	::System::Void set__consoleScrollToEnd(::System::Nullable_1<::System::Boolean> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__CONSOLESCROLLTOEND_OFFSET))(this, value);
	}

	::System::Nullable_1<::System::Int32> get__scrollFromDataIndex()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLFROMDATAINDEX_OFFSET))(this);
	}

	::System::Void set__scrollFromDataIndex(::System::Nullable_1<::System::Int32> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLFROMDATAINDEX_OFFSET))(this, value);
	}

	::System::Void _ScrollToTarget_g__Inner_28_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass28_0& param_0)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass28_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGET_G__INNER_28_0_OFFSET))(this, param_0);
	}

	::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection _CheckScrollDataIndex_g__GetScrollDirection_32_0()
	{
		return ((::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CHECKSCROLLDATAINDEX_G__GETSCROLLDIRECTION_32_0_OFFSET))(this);
	}

	static ::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection _ScrollToShowTargetWithoutAnim_g__GetScrollDirection_34_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass34_0& param_0)
	{
		return ((::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection(*)(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass34_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOSHOWTARGETWITHOUTANIM_G__GETSCROLLDIRECTION_34_0_OFFSET))(param_0);
	}

	::System::Int32 _ScrollToTargetInner_g__GetNearestDataIndex_37_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass37_0& param_0, ::System::Object*& param_1)
	{
		return ((::System::Int32(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass37_0&, ::System::Object*&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGETINNER_G__GETNEARESTDATAINDEX_37_0_OFFSET))(this, param_0, param_1);
	}

	static ::System::Int32 _ScrollToTargetInner_g__GetDistanceToVisible_37_1(::System::Int32 dataIndex_inner, ::System::Object*& param_1)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Object*&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGETINNER_G__GETDISTANCETOVISIBLE_37_1_OFFSET))(dataIndex_inner, param_1);
	}

	::System::Boolean _GetRealAlignRectTransform_g__IsMoveToEndV2_42_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass42_0& param_0)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass42_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__ISMOVETOENDV2_42_0_OFFSET))(this, param_0);
	}

	::System::Int32 _GetRealAlignRectTransform_g__SelectActiveGameObject_42_1(::System::Int32 _siblingIndex, ::System::Boolean next, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass42_0& param_2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass42_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECT_42_1_OFFSET))(this, _siblingIndex, next, param_2);
	}

	::System::Nullable_1<::System::Int32> _GetRealAlignRectTransform_g__SelectActiveGameObjectInner_42_2(::System::Int32 _siblingIndex, ::System::Boolean next, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass42_0& param_2)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Boolean, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass42_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECTINNER_42_2_OFFSET))(this, _siblingIndex, next, param_2);
	}

	::System::Int32 _GetRealAlignRectTransform_g__SelectActiveGameObjectByOffset_42_3(::System::Int32 _siblingIndex, ::System::Int32 offset, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass42_0& param_2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass42_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECTBYOFFSET_42_3_OFFSET))(this, _siblingIndex, offset, param_2);
	}

	::System::Int32 _GetRealAlignDataIndexV2_g__GetPrevIndex_43_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass43_0& param_0)
	{
		return ((::System::Int32(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass43_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNDATAINDEXV2_G__GETPREVINDEX_43_0_OFFSET))(this, param_0);
	}

	::System::Int32 _GetRealAlignDataIndexV2_g__GetNextIndex_43_1(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass43_0& param_0)
	{
		return ((::System::Int32(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass43_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNDATAINDEXV2_G__GETNEXTINDEX_43_1_OFFSET))(this, param_0);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> _JudgeAlignDataIndex_g__GetAlignDataIndex_44_0(::System::Int32 prevDataIndex_inner, ::System::Int32 nextDataIndex_inner, ::System::Int32 start_inner, ::System::Int32 end_inner, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass44_0& param_4)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass44_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETALIGNDATAINDEX_44_0_OFFSET))(this, prevDataIndex_inner, nextDataIndex_inner, start_inner, end_inner, param_4);
	}

	::System::Int32 _JudgeAlignDataIndex_g__GetScrollDistance_44_1(::System::Int32 dataIndex_inner, ::System::Int32 start_inner, ::System::Int32 end_inner, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass44_0& param_3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass44_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETSCROLLDISTANCE_44_1_OFFSET))(this, dataIndex_inner, start_inner, end_inner, param_3);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> _JudgeAlignDataIndex_g__GetAlignDataIndex_44_2(::System::Int32 prevDataIndex_inner, ::System::Int32 nextDataIndex_inner, ::System::Int32 center_inner, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass44_0& param_3)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass44_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETALIGNDATAINDEX_44_2_OFFSET))(this, prevDataIndex_inner, nextDataIndex_inner, center_inner, param_3);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPositionV2_g__CalAlignTargetPosition_Center_45_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0& param_0)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_CENTER_45_0_OFFSET))(this, param_0);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPositionV2_g__CalGridAlignTargetPosition_Start_45_1(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0& param_0)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALGRIDALIGNTARGETPOSITION_START_45_1_OFFSET))(this, param_0);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPositionV2_g__CalGridAlignTargetPosition_End_45_2(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0& param_0)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALGRIDALIGNTARGETPOSITION_END_45_2_OFFSET))(this, param_0);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPositionV2_g__CalAlignTargetPosition_Visible_45_3(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0& param_0)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_VISIBLE_45_3_OFFSET))(this, param_0);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPositionV2_g__CalAlignTargetPosition_CustomRange_45_4(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0& param_0)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass45_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_CUSTOMRANGE_45_4_OFFSET))(this, param_0);
	}

	::System::Void __base_OnClearAllItemDatas()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET___BASE_ONCLEARALLITEMDATAS_OFFSET))(this);
	}

	::System::Void __base_OnInitData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET___BASE_ONINITDATA_OFFSET))(this);
	}
};

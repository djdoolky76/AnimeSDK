#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext_AlignParamType.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext_ScrollDirection.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_ALIGNPARAMTYPE_OFFSET UNITYSDK_OFFSET(0x3581C0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_ALIGNTOREALVIEWEDGE_OFFSET UNITYSDK_OFFSET(0x71AA20)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_ENABLEOVERINDEX_OFFSET UNITYSDK_OFFSET(0x6D0160)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_FROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x71A9F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_HASANIM_OFFSET UNITYSDK_OFFSET(0x40C7D0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_NOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET UNITYSDK_OFFSET(0x3D00D0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_OVERRIDEALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x3CF550)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_SCROLLDIRECTION_OFFSET UNITYSDK_OFFSET(0x363220)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_TARGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x359320)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_TARGETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_ALIGNPARAMTYPE_OFFSET UNITYSDK_OFFSET(0x374AF0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_ALIGNTOREALVIEWEDGE_OFFSET UNITYSDK_OFFSET(0x71AA30)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_ENABLEOVERINDEX_OFFSET UNITYSDK_OFFSET(0x71AA10)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_FROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x71AA00)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_HASANIM_OFFSET UNITYSDK_OFFSET(0x5F1BC0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_NOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET UNITYSDK_OFFSET(0x5B4B70)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_OVERRIDEALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x6ADB00)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_SCROLLDIRECTION_OFFSET UNITYSDK_OFFSET(0x646580)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_TARGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x359150)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_TARGETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x388A60)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHALIGNPARAMTYPE_OFFSET UNITYSDK_OFFSET(0x71AB50)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHALIGNTOREALVIEWEDGE_OFFSET UNITYSDK_OFFSET(0x71ADF0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHENABLEOVERINDEX_OFFSET UNITYSDK_OFFSET(0x71AD60)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHFROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x71ACE0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHNOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET UNITYSDK_OFFSET(0x71AC60)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHOVERRIDEALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x71AAC0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHSCROLLDIRECTION_OFFSET UNITYSDK_OFFSET(0x71ABE0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x71AA80)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x71AA40)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollToTargetContext_TypeDefinitionIndex = 73318;

	struct alignas(8) ScrollToTargetContext
	{
		::System::Int32 _targetDataIndex_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::RectTransform* _targetRectTransform_k__BackingField; // 0x18
		::System::Boolean _hasAnim_k__BackingField; // 0x20
		::System::Byte _padding1[0x3];
		::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType _alignParamType_k__BackingField; // 0x24
		::System::Boolean _notInterruptPreScrollIfCurNoNeedScroll_TempFor1_0_k__BackingField; // 0x28
		::System::Byte _padding2[0x7];
		::MonoUITableScrollV2_ScrollParams_AlignParam* _overrideAlignParam_k__BackingField; // 0x30
		::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection _scrollDirection_k__BackingField; // 0x38
		::System::Nullable_1<::System::Int32> _fromDataIndex_k__BackingField; // 0x3C
		::System::Nullable_1<::System::Boolean> _EnableOverIndex_k__BackingField; // 0x44
		::System::Boolean _alignToRealViewEdge_k__BackingField; // 0x46

		::System::Void _ctor(::System::Int32 targetDataIndex, ::System::Boolean hasAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT__CTOR_OFFSET))(this, targetDataIndex, hasAnim);
		}

		::System::Void _ctor_1(::UnityEngine::RectTransform* targetRectTransform, ::System::Boolean hasAnim)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT__CTOR_1_OFFSET))(this, targetRectTransform, hasAnim);
		}

		::System::Int32 get_targetDataIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_TARGETDATAINDEX_OFFSET))(this);
		}

		::System::Void set_targetDataIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_TARGETDATAINDEX_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_targetRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_TARGETRECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_targetRectTransform(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_TARGETRECTTRANSFORM_OFFSET))(this, value);
		}

		::System::Boolean get_hasAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_HASANIM_OFFSET))(this);
		}

		::System::Void set_hasAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_HASANIM_OFFSET))(this, value);
		}

		::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType get_alignParamType()
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_ALIGNPARAMTYPE_OFFSET))(this);
		}

		::System::Void set_alignParamType(::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType value)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_ALIGNPARAMTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_notInterruptPreScrollIfCurNoNeedScroll_TempFor1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_NOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET))(this);
		}

		::System::Void set_notInterruptPreScrollIfCurNoNeedScroll_TempFor1_0(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_NOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET))(this, value);
		}

		::MonoUITableScrollV2_ScrollParams_AlignParam* get_overrideAlignParam()
		{
			return ((::MonoUITableScrollV2_ScrollParams_AlignParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_OVERRIDEALIGNPARAM_OFFSET))(this);
		}

		::System::Void set_overrideAlignParam(::MonoUITableScrollV2_ScrollParams_AlignParam* value)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_OVERRIDEALIGNPARAM_OFFSET))(this, value);
		}

		::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection get_scrollDirection()
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_SCROLLDIRECTION_OFFSET))(this);
		}

		::System::Void set_scrollDirection(::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_SCROLLDIRECTION_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_fromDataIndex()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_FROMDATAINDEX_OFFSET))(this);
		}

		::System::Void set_fromDataIndex(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_FROMDATAINDEX_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_EnableOverIndex()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_ENABLEOVERINDEX_OFFSET))(this);
		}

		::System::Void set_EnableOverIndex(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_ENABLEOVERINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_alignToRealViewEdge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_GET_ALIGNTOREALVIEWEDGE_OFFSET))(this);
		}

		::System::Void set_alignToRealViewEdge(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_SET_ALIGNTOREALVIEWEDGE_OFFSET))(this, value);
		}

		/*
		::NAPScrollView::DataStruct::ScrollToTargetContext WithOverrideAlignParam(::MonoUITableScrollV2_ScrollParams_AlignParam* overrideAlignParam)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext(*)(::PVOID, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHOVERRIDEALIGNPARAM_OFFSET))(this, overrideAlignParam);
		}
		*/

		/*
		::NAPScrollView::DataStruct::ScrollToTargetContext WithAlignParamType(::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType alignParamType)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHALIGNPARAMTYPE_OFFSET))(this, alignParamType);
		}
		*/

		/*
		::NAPScrollView::DataStruct::ScrollToTargetContext WithScrollDirection(::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection scrollDirection)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHSCROLLDIRECTION_OFFSET))(this, scrollDirection);
		}
		*/

		/*
		::NAPScrollView::DataStruct::ScrollToTargetContext WithNotInterruptPreScrollIfCurNoNeedScroll_TempFor1_0(::System::Boolean tempParam)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHNOTINTERRUPTPRESCROLLIFCURNONEEDSCROLL_TEMPFOR1_0_OFFSET))(this, tempParam);
		}
		*/

		/*
		::NAPScrollView::DataStruct::ScrollToTargetContext WithFromDataIndex(::System::Nullable_1<::System::Int32> fromDataIndex)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHFROMDATAINDEX_OFFSET))(this, fromDataIndex);
		}
		*/

		/*
		::NAPScrollView::DataStruct::ScrollToTargetContext WithEnableOverIndex(::System::Boolean enableOverIndex)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHENABLEOVERINDEX_OFFSET))(this, enableOverIndex);
		}
		*/

		/*
		::NAPScrollView::DataStruct::ScrollToTargetContext WithAlignToRealViewEdge(::System::Boolean alignToRealViewEdge)
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetContext(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETCONTEXT_WITHALIGNTOREALVIEWEDGE_OFFSET))(this, alignToRealViewEdge);
		}
		*/
	};
}

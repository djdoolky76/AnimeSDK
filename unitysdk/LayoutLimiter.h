#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define LAYOUTLIMITER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x13D0F5D0)
#define LAYOUTLIMITER_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x13D0F610)
#define LAYOUTLIMITER_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x13D0F5B0)
#define LAYOUTLIMITER_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x13D0F5A0)
#define LAYOUTLIMITER_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x13D0F5C0)
#define LAYOUTLIMITER_GET_MINHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x13D0F290)
#define LAYOUTLIMITER_GET_MINHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x13D0F200)
#define LAYOUTLIMITER_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x13D0F570)
#define LAYOUTLIMITER_GET_MINWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x13D0F170)
#define LAYOUTLIMITER_GET_MINWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x13D0EFD0)
#define LAYOUTLIMITER_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x13D0F560)
#define LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x13D0F4D0)
#define LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x13D0F440)
#define LAYOUTLIMITER_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x13D0F590)
#define LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x13D0F3B0)
#define LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x13D0F320)
#define LAYOUTLIMITER_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x13D0F580)
#define LAYOUTLIMITER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x13D0F8C0)
#define LAYOUTLIMITER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x13D0F870)
#define LAYOUTLIMITER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13D0F710)
#define LAYOUTLIMITER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13D0F650)
#define LAYOUTLIMITER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x13D0F790)
#define LAYOUTLIMITER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x13D0F800)
#define LAYOUTLIMITER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x13D0F6C0)
#define LAYOUTLIMITER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x13D0F060)
#define LAYOUTLIMITER_SET_MINHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x13D0F2A0)
#define LAYOUTLIMITER_SET_MINHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x13D0F210)
#define LAYOUTLIMITER_SET_MINWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x13D0F180)
#define LAYOUTLIMITER_SET_MINWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x13D0EFE0)
#define LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x13D0F4E0)
#define LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x13D0F450)
#define LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x13D0F3C0)
#define LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x13D0F330)
#define LAYOUTLIMITER__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0F910)
#define LAYOUTLIMITER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x13D0F970)
#define LAYOUTLIMITER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x13D0FA00)
#define LAYOUTLIMITER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13D0FA90)
#define LAYOUTLIMITER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13D0FB20)
#define LAYOUTLIMITER___BASE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x13D0FBB0)
#define LAYOUTLIMITER___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x13D0FC40)
#define LAYOUTLIMITER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x13D0FCD0)

inline static constexpr unsigned int LayoutLimiter_TypeDefinitionIndex = 72335;

class LayoutLimiter : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::UnityEngine::Vector2 _minWidthLimit; // 0x18
	::UnityEngine::Vector2 _minHeightLimit; // 0x20
	::UnityEngine::Vector2 _preferredWidthLimit; // 0x28
	::UnityEngine::Vector2 _preferredHeightLimit; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER__CTOR_OFFSET))(this);
	}

	::System::Single get_minWidthLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINWIDTHLIMITMIN_OFFSET))(this);
	}

	::System::Void set_minWidthLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINWIDTHLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_minWidthLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINWIDTHLIMITMAX_OFFSET))(this);
	}

	::System::Void set_minWidthLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINWIDTHLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_minHeightLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINHEIGHTLIMITMIN_OFFSET))(this);
	}

	::System::Void set_minHeightLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINHEIGHTLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_minHeightLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINHEIGHTLIMITMAX_OFFSET))(this);
	}

	::System::Void set_minHeightLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINHEIGHTLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_preferredWidthLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMIN_OFFSET))(this);
	}

	::System::Void set_preferredWidthLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_preferredWidthLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMAX_OFFSET))(this);
	}

	::System::Void set_preferredWidthLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_preferredHeightLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMIN_OFFSET))(this);
	}

	::System::Void set_preferredHeightLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_preferredHeightLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMAX_OFFSET))(this);
	}

	::System::Void set_preferredHeightLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_minWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINWIDTH_OFFSET))(this);
	}

	::System::Single get_minHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINHEIGHT_OFFSET))(this);
	}

	::System::Single get_preferredWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDWIDTH_OFFSET))(this);
	}

	::System::Single get_preferredHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDHEIGHT_OFFSET))(this);
	}

	::System::Single get_flexibleWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_FLEXIBLEWIDTH_OFFSET))(this);
	}

	::System::Single get_flexibleHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_FLEXIBLEHEIGHT_OFFSET))(this);
	}

	::System::Int32 get_layoutPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_LAYOUTPRIORITY_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void OnDidApplyAnimationProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
	}

	::System::Void OnBeforeTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void SetDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SETDIRTY_OFFSET))(this);
	}

	::System::Void __base_OnBeforeTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void __base_OnDidApplyAnimationProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
	}

	::System::Void __base_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONENABLE_OFFSET))(this);
	}

	::System::Void __base_OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void __base_OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void __base_OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}
};

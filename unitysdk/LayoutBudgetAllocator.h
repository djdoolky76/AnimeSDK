#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

class LayoutBudgetLimiter;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define LAYOUTBUDGETALLOCATOR_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x14DD46C0)
#define LAYOUTBUDGETALLOCATOR_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x14DD4700)
#define LAYOUTBUDGETALLOCATOR_COMPUTEALLBUDGETS_OFFSET UNITYSDK_OFFSET(0x14DD4750)
#define LAYOUTBUDGETALLOCATOR_GETBUDGET_OFFSET UNITYSDK_OFFSET(0x14DD4650)
#define LAYOUTBUDGETALLOCATOR_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x14DD4F20)
#define LAYOUTBUDGETALLOCATOR_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x14DD4F10)
#define LAYOUTBUDGETALLOCATOR_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x14DD4F30)
#define LAYOUTBUDGETALLOCATOR_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x14DD4F00)
#define LAYOUTBUDGETALLOCATOR_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x14DD4EF0)
#define LAYOUTBUDGETALLOCATOR_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x14DD4EE0)
#define LAYOUTBUDGETALLOCATOR_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x14DD4ED0)
#define LAYOUTBUDGETALLOCATOR_INVALIDATECHILDCACHE_OFFSET UNITYSDK_OFFSET(0x14DD5300)
#define LAYOUTBUDGETALLOCATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14DD5510)
#define LAYOUTBUDGETALLOCATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14DD5350)
#define LAYOUTBUDGETALLOCATOR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x14DD5610)
#define LAYOUTBUDGETALLOCATOR_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x14DD5660)
#define LAYOUTBUDGETALLOCATOR_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x14DD5590)
#define LAYOUTBUDGETALLOCATOR_REFRESHCHILDCACHEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x14DD5020)
#define LAYOUTBUDGETALLOCATOR_REFRESHVLGIFNEEDED_OFFSET UNITYSDK_OFFSET(0x14DD4F40)
#define LAYOUTBUDGETALLOCATOR_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x14DD5400)
#define LAYOUTBUDGETALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD56E0)
#define LAYOUTBUDGETALLOCATOR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14DD5740)
#define LAYOUTBUDGETALLOCATOR___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14DD57D0)
#define LAYOUTBUDGETALLOCATOR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x14DD5860)
#define LAYOUTBUDGETALLOCATOR___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x14DD58F0)

inline static constexpr unsigned int LayoutBudgetAllocator_TypeDefinitionIndex = 80651;

class LayoutBudgetAllocator : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::UnityEngine::RectTransform* ConstraintSource; // 0x18
	::System::Int32 _layoutPriority; // 0x20
	::System::Byte _padding0[0x4];
	::UnityEngine::UI::VerticalLayoutGroup* _vlg; // 0x28
	::System::Boolean _vlgDirty; // 0x30
	::System::Byte _padding1[0x7];
	::Il2CppArray<::LayoutBudgetLimiter*>* _childLimiters; // 0x38
	::Il2CppArray<::UnityEngine::Transform*>* _childTransforms; // 0x40
	::System::Int32 _cachedChildCount; // 0x48
	::System::Byte _padding2[0x4];
	::Il2CppArray<::System::Single>* _budgets; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR__CTOR_OFFSET))(this);
	}

	::System::Single GetBudget(::System::Int32 siblingIndex)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GETBUDGET_OFFSET))(this, siblingIndex);
	}

	::System::Void CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
	}

	::System::Single get_preferredWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_PREFERREDWIDTH_OFFSET))(this);
	}

	::System::Single get_preferredHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_PREFERREDHEIGHT_OFFSET))(this);
	}

	::System::Single get_minWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_MINWIDTH_OFFSET))(this);
	}

	::System::Single get_minHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_MINHEIGHT_OFFSET))(this);
	}

	::System::Single get_flexibleWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_FLEXIBLEWIDTH_OFFSET))(this);
	}

	::System::Single get_flexibleHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_FLEXIBLEHEIGHT_OFFSET))(this);
	}

	::System::Int32 get_layoutPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_GET_LAYOUTPRIORITY_OFFSET))(this);
	}

	::System::Void ComputeAllBudgets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_COMPUTEALLBUDGETS_OFFSET))(this);
	}

	::System::Void RefreshVlgIfNeeded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_REFRESHVLGIFNEEDED_OFFSET))(this);
	}

	::System::Void RefreshChildCacheIfNeeded(::System::Int32 childCount)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_REFRESHCHILDCACHEIFNEEDED_OFFSET))(this, childCount);
	}

	::System::Void InvalidateChildCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_INVALIDATECHILDCACHE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}

	::System::Void OnTransformChildrenChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
	}

	::System::Void SetDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR_SETDIRTY_OFFSET))(this);
	}

	::System::Void __base_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR___BASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR___BASE_ONENABLE_OFFSET))(this);
	}

	::System::Void __base_OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}

	::System::Void __base_OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBUDGETALLOCATOR___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}
};

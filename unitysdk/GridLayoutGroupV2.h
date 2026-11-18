#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GridLayoutGroupV2_MixedLineBreakMode.h"
#include "unitysdk/GridLayoutGroupV2_OverflowPolicy.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Axis.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Constraint.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Corner.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define GRIDLAYOUTGROUPV2_BUILDPLACEMENTCACHE_OFFSET UNITYSDK_OFFSET(0x13E05A20)
#define GRIDLAYOUTGROUPV2_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x13E04C50)
#define GRIDLAYOUTGROUPV2_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x13E04F70)
#define GRIDLAYOUTGROUPV2_COMPOSECELLKEY_OFFSET UNITYSDK_OFFSET(0x13E06AA0)
#define GRIDLAYOUTGROUPV2_DELAYEDSETDIRTY_OFFSET UNITYSDK_OFFSET(0x13E04BC0)
#define GRIDLAYOUTGROUPV2_ENSUREPLACEMENTCACHE_OFFSET UNITYSDK_OFFSET(0x13E04E80)
#define GRIDLAYOUTGROUPV2_FINDDENSEPACKPOSITION_OFFSET UNITYSDK_OFFSET(0x13E062C0)
#define GRIDLAYOUTGROUPV2_FINDSTRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x13E064C0)
#define GRIDLAYOUTGROUPV2_GETCHILDSPAN_OFFSET UNITYSDK_OFFSET(0x13E060A0)
#define GRIDLAYOUTGROUPV2_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x13E04AB0)
#define GRIDLAYOUTGROUPV2_GETCONSTRAINTOPTIONS_OFFSET UNITYSDK_OFFSET(0x13E059A0)
#define GRIDLAYOUTGROUPV2_GETSPANLENGTH_OFFSET UNITYSDK_OFFSET(0x13E04EE0)
#define GRIDLAYOUTGROUPV2_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x13E044C0)
#define GRIDLAYOUTGROUPV2_GET_CONSTRAINTCOUNT_OFFSET UNITYSDK_OFFSET(0x13E04800)
#define GRIDLAYOUTGROUPV2_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13E046D0)
#define GRIDLAYOUTGROUPV2_GET_ISHORIZONTALSTARTAXIS_OFFSET UNITYSDK_OFFSET(0x13E04A60)
#define GRIDLAYOUTGROUPV2_GET_MIXEDLINEBREAKMODE_OFFSET UNITYSDK_OFFSET(0x13E04980)
#define GRIDLAYOUTGROUPV2_GET_OVERFLOWPOLICY_OFFSET UNITYSDK_OFFSET(0x13E048F0)
#define GRIDLAYOUTGROUPV2_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x13E04580)
#define GRIDLAYOUTGROUPV2_GET_STARTAXIS_OFFSET UNITYSDK_OFFSET(0x13E04A10)
#define GRIDLAYOUTGROUPV2_GET_STARTCORNER_OFFSET UNITYSDK_OFFSET(0x13E04640)
#define GRIDLAYOUTGROUPV2_INVALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x13E04B70)
#define GRIDLAYOUTGROUPV2_ISAREAFREEATMAINCROSS_OFFSET UNITYSDK_OFFSET(0x13E06790)
#define GRIDLAYOUTGROUPV2_ISAREAFREE_OFFSET UNITYSDK_OFFSET(0x13E06920)
#define GRIDLAYOUTGROUPV2_MARKOCCUPIED_OFFSET UNITYSDK_OFFSET(0x13E065D0)
#define GRIDLAYOUTGROUPV2_NORMALIZECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13E047B0)
#define GRIDLAYOUTGROUPV2_NOTIFYCHILDLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x13E06AF0)
#define GRIDLAYOUTGROUPV2_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x13E058D0)
#define GRIDLAYOUTGROUPV2_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x13E05920)
#define GRIDLAYOUTGROUPV2_SETCELLSALONGAXIS_OFFSET UNITYSDK_OFFSET(0x13E051E0)
#define GRIDLAYOUTGROUPV2_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x13E04B00)
#define GRIDLAYOUTGROUPV2_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x13E05150)
#define GRIDLAYOUTGROUPV2_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x13E05840)
#define GRIDLAYOUTGROUPV2_SET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x13E044D0)
#define GRIDLAYOUTGROUPV2_SET_CONSTRAINTCOUNT_OFFSET UNITYSDK_OFFSET(0x13E04810)
#define GRIDLAYOUTGROUPV2_SET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13E046E0)
#define GRIDLAYOUTGROUPV2_SET_MIXEDLINEBREAKMODE_OFFSET UNITYSDK_OFFSET(0x13E04990)
#define GRIDLAYOUTGROUPV2_SET_OVERFLOWPOLICY_OFFSET UNITYSDK_OFFSET(0x13E04900)
#define GRIDLAYOUTGROUPV2_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x13E04590)
#define GRIDLAYOUTGROUPV2_SET_STARTCORNER_OFFSET UNITYSDK_OFFSET(0x13E04650)
#define GRIDLAYOUTGROUPV2__CTOR_OFFSET UNITYSDK_OFFSET(0x13E06B40)
#define GRIDLAYOUTGROUPV2___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x13E06CF0)
#define GRIDLAYOUTGROUPV2___BASE_DELAYEDSETDIRTY_OFFSET UNITYSDK_OFFSET(0x13E06D00)
#define GRIDLAYOUTGROUPV2___BASE_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x13E06DD0)
#define GRIDLAYOUTGROUPV2___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x13E06E60)
#define GRIDLAYOUTGROUPV2___BASE_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x13E06E70)
#define GRIDLAYOUTGROUPV2___BASE_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x13E06F10)
#define GRIDLAYOUTGROUPV2___N__0_OFFSET UNITYSDK_OFFSET(0x13E06C20)

inline static constexpr unsigned int GridLayoutGroupV2_TypeDefinitionIndex = 49539;

class GridLayoutGroupV2 : public ::UnityEngine::UI::LayoutGroup
{
public:
	::UnityEngine::Vector2 m_CellSize; // 0x58
	::UnityEngine::Vector2 m_Spacing; // 0x60
	::UnityEngine::UI::GridLayoutGroup_Corner m_StartCorner; // 0x68
	::UnityEngine::UI::GridLayoutGroup_Constraint m_Constraint; // 0x6C
	::System::Int32 m_ConstraintCount; // 0x70
	::GridLayoutGroupV2_OverflowPolicy m_OverflowPolicy; // 0x74
	::GridLayoutGroupV2_MixedLineBreakMode m_MixedLineBreakMode; // 0x78
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Object*>* m_Placements; // 0x80
	::System::Collections::Generic::HashSet_1<::System::Int64>* m_OccupiedCells; // 0x88
	::System::Boolean m_IsCacheDirty; // 0x90
	::System::Byte _padding1[0x3];
	::System::Int32 m_UsedCols; // 0x94
	::System::Int32 m_UsedRows; // 0x98
	::System::Int32 m_LastCellCountX; // 0x9C
	::System::Int32 m_LastCellCountY; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 get_cellSize()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GET_CELLSIZE_OFFSET))(this);
	}

	::System::Void set_cellSize(::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SET_CELLSIZE_OFFSET))(this, value);
	}

	::UnityEngine::Vector2 get_spacing()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GET_SPACING_OFFSET))(this);
	}

	::System::Void set_spacing(::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SET_SPACING_OFFSET))(this, value);
	}

	::UnityEngine::UI::GridLayoutGroup_Corner get_startCorner()
	{
		return ((::UnityEngine::UI::GridLayoutGroup_Corner(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GET_STARTCORNER_OFFSET))(this);
	}

	::System::Void set_startCorner(::UnityEngine::UI::GridLayoutGroup_Corner value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_Corner))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SET_STARTCORNER_OFFSET))(this, value);
	}

	::UnityEngine::UI::GridLayoutGroup_Constraint get_constraint()
	{
		return ((::UnityEngine::UI::GridLayoutGroup_Constraint(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GET_CONSTRAINT_OFFSET))(this);
	}

	::System::Void set_constraint(::UnityEngine::UI::GridLayoutGroup_Constraint value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_Constraint))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SET_CONSTRAINT_OFFSET))(this, value);
	}

	::System::Int32 get_constraintCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GET_CONSTRAINTCOUNT_OFFSET))(this);
	}

	::System::Void set_constraintCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SET_CONSTRAINTCOUNT_OFFSET))(this, value);
	}

	::GridLayoutGroupV2_OverflowPolicy get_overflowPolicy()
	{
		return ((::GridLayoutGroupV2_OverflowPolicy(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GET_OVERFLOWPOLICY_OFFSET))(this);
	}

	::System::Void set_overflowPolicy(::GridLayoutGroupV2_OverflowPolicy value)
	{
		return ((::System::Void(*)(::PVOID, ::GridLayoutGroupV2_OverflowPolicy))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SET_OVERFLOWPOLICY_OFFSET))(this, value);
	}

	::GridLayoutGroupV2_MixedLineBreakMode get_mixedLineBreakMode()
	{
		return ((::GridLayoutGroupV2_MixedLineBreakMode(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GET_MIXEDLINEBREAKMODE_OFFSET))(this);
	}

	::System::Void set_mixedLineBreakMode(::GridLayoutGroupV2_MixedLineBreakMode value)
	{
		return ((::System::Void(*)(::PVOID, ::GridLayoutGroupV2_MixedLineBreakMode))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SET_MIXEDLINEBREAKMODE_OFFSET))(this, value);
	}

	::UnityEngine::UI::GridLayoutGroup_Axis get_startAxis()
	{
		return ((::UnityEngine::UI::GridLayoutGroup_Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GET_STARTAXIS_OFFSET))(this);
	}

	::System::Boolean get_IsHorizontalStartAxis()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GET_ISHORIZONTALSTARTAXIS_OFFSET))(this);
	}

	::UnityEngine::Vector2Int GetColRow()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GETCOLROW_OFFSET))(this);
	}

	::System::Void SetDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SETDIRTY_OFFSET))(this);
	}

	::System::Collections::IEnumerator* DelayedSetDirty(::UnityEngine::RectTransform* rectTransform)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_DELAYEDSETDIRTY_OFFSET))(this, rectTransform);
	}

	::System::Void CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
	}

	::System::Void SetLayoutHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SETLAYOUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void SetLayoutVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SETLAYOUTVERTICAL_OFFSET))(this);
	}

	::System::Void OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}

	::System::Void OnTransformChildrenChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Object*>>* GetConstraintOptions()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Object*>>*(*)())((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GETCONSTRAINTOPTIONS_OFFSET))();
	}

	::System::Void NormalizeConstraint()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_NORMALIZECONSTRAINT_OFFSET))(this);
	}

	::System::Void InvalidateCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_INVALIDATECACHE_OFFSET))(this);
	}

	::System::Void EnsurePlacementCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_ENSUREPLACEMENTCACHE_OFFSET))(this);
	}

	::System::Void BuildPlacementCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_BUILDPLACEMENTCACHE_OFFSET))(this);
	}

	::System::Void FindStridePosition(::System::Int32 cursorMain, ::System::Int32 cursorCross, ::System::Int32 spanMain, ::System::Int32 spanCross, ::System::Int32 mainLimit, ::System::Int32& lineLargestCrossSpan, ::System::Int32& targetMain, ::System::Int32& targetCross)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_FINDSTRIDEPOSITION_OFFSET))(this, cursorMain, cursorCross, spanMain, spanCross, mainLimit, lineLargestCrossSpan, targetMain, targetCross);
	}

	::System::Void FindDensePackPosition(::System::Int32 cursorMain, ::System::Int32 cursorCross, ::System::Int32 spanMain, ::System::Int32 spanCross, ::System::Int32 mainLimit, ::System::Int32& targetMain, ::System::Int32& targetCross)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_FINDDENSEPACKPOSITION_OFFSET))(this, cursorMain, cursorCross, spanMain, spanCross, mainLimit, targetMain, targetCross);
	}

	::System::Boolean IsAreaFreeAtMainCross(::System::Int32 main, ::System::Int32 cross, ::System::Int32 spanMain, ::System::Int32 spanCross)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_ISAREAFREEATMAINCROSS_OFFSET))(this, main, cross, spanMain, spanCross);
	}

	::System::Boolean IsAreaFree(::System::Int32 x, ::System::Int32 y, ::System::Int32 colSpan, ::System::Int32 rowSpan)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_ISAREAFREE_OFFSET))(this, x, y, colSpan, rowSpan);
	}

	::System::Void MarkOccupied(::System::Int32 x, ::System::Int32 y, ::System::Int32 colSpan, ::System::Int32 rowSpan)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_MARKOCCUPIED_OFFSET))(this, x, y, colSpan, rowSpan);
	}

	static ::System::Int64 ComposeCellKey(::System::Int32 x, ::System::Int32 y)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_COMPOSECELLKEY_OFFSET))(x, y);
	}

	static ::System::Void GetChildSpan(::UnityEngine::RectTransform* child, ::System::Int32& colSpan, ::System::Int32& rowSpan)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GETCHILDSPAN_OFFSET))(child, colSpan, rowSpan);
	}

	::System::Void NotifyChildLayoutDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_NOTIFYCHILDLAYOUTDIRTY_OFFSET))(this);
	}

	::System::Void SetCellsAlongAxis(::System::Int32 axis)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_SETCELLSALONGAXIS_OFFSET))(this, axis);
	}

	static ::System::Single GetSpanLength(::System::Int32 span, ::System::Single cell, ::System::Single space)
	{
		return ((::System::Single(*)(::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2_GETSPANLENGTH_OFFSET))(span, cell, space);
	}

	::System::Collections::IEnumerator* __n__0(::UnityEngine::RectTransform* rectTransform)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2___N__0_OFFSET))(this, rectTransform);
	}

	::System::Void __base_CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Collections::IEnumerator* __base_DelayedSetDirty(::UnityEngine::RectTransform* P0)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2___BASE_DELAYEDSETDIRTY_OFFSET))(this, P0);
	}

	::UnityEngine::Vector2Int __base_GetColRow()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2___BASE_GETCOLROW_OFFSET))(this);
	}

	::System::Void __base_OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}

	::System::Void __base_OnTransformChildrenChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2___BASE_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
	}

	::System::Void __base_SetDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2___BASE_SETDIRTY_OFFSET))(this);
	}
};

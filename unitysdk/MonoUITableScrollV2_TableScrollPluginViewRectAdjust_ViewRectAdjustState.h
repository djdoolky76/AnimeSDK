#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState_TypeDefinitionIndex = 40051;

enum class MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState : ::System::Int32
{
	AutoSpace = 5,
	NotEnableUseUIAnimCell = 7,
	MonoUIAnimCellNotContainScaleRootAndAlphaRoot = 10,
	DynamicViewRectSize = 4,
	CellIsNull = 8,
	AutoSpace_Special_Center_WithViewRectAdjust = 6,
	ForceDisable = 1,
	Active = 0,
	CellNotContainMonoUIAnimCell = 9,
	SimpleMode = 2,
	DynamicItemSize = 3,
};

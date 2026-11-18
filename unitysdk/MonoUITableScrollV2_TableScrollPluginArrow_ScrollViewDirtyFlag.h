#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginArrow_ScrollViewDirtyFlag_TypeDefinitionIndex = 40056;

enum class MonoUITableScrollV2_TableScrollPluginArrow_ScrollViewDirtyFlag : ::System::Int32
{
	OnEable = 4,
	CanvasRebuild = 1,
	Move = 2,
	Reset = 8,
	None = 0,
	ViewBoundChanged = 16,
};

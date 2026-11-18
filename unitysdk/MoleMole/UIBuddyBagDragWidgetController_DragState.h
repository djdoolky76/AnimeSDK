#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddyBagDragWidgetController_DragState_TypeDefinitionIndex = 56964;

	enum class UIBuddyBagDragWidgetController_DragState : ::System::Int32
	{
		DragEnd = 4,
		Draging_Item = 2,
		None = 0,
		Draging_Component = 3,
		StartDrag = 1,
	};
}

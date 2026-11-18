#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIControlReference_UICtrlType_TypeDefinitionIndex = 80231;

	enum class UIControlReference_UICtrlType : ::System::Int32
	{
		CommonWidget = 4,
		UI3DModelController = 5,
		ScrollViewItemWidgetController = 6,
		PopController = 1,
		WidgetController = 3,
		PageController = 0,
		StorePageController = 8,
		ChildController = 2,
		BigSceneStorePageController = 7,
	};
}

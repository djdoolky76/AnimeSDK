#pragma once
#include "unitysdk/unitysdk.h"

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int B56452702F10EE79_TypeDefinitionIndex = 13319;

	enum class B56452702F10EE79 : ::System::Int32
	{
		WorldTransformDirty = 1,
		WorldTransformInverseDirty = 2,
		WorldClipDirty = 4,
		BoundingBoxDirty = 8,
		WorldBoundingBoxDirty = 16,
		EventCallbackParentCategoriesDirty = 32,
		LayoutManual = 64,
		CompositeRoot = 128,
		RequireMeasureFunction = 256,
		EnableViewDataPersistence = 512,
		DisableClipping = 1024,
		NeedsAttachToPanelEvent = 2048,
		HierarchyDisplayed = 4096,
		StyleInitialized = 8192,
		Init = 4159,
	};
}

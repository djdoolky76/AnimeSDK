#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_EInternalSetTextSource_TypeDefinitionIndex = 69439;

	enum class UILocalizationText_EInternalSetTextSource : ::System::Int32
	{
		SetText = 4,
		DynamicChanged = 9,
		SourceTextProperty = 0,
		TextSetDynamicSetByCodeOnlyEditor = 10,
		Awake = 1,
		SourceTextOnValueChanged = 3,
		SetEditorTextOnValueChanged = 2,
		EditorTypesetPreview = 11,
		SetEmpty = 6,
		TryRebuildAdjustedText = 8,
		SetTextFunc = 5,
		ProcessTextPipeline = 7,
	};
}

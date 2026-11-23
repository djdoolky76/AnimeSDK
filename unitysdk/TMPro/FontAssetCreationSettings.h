#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace TMPro
{
	inline static constexpr unsigned int FontAssetCreationSettings_TypeDefinitionIndex = 18283;

	struct alignas(8) FontAssetCreationSettings
	{
		::System::String* sourceFontFileName; // 0x10
		::System::String* sourceFontFileGUID; // 0x18
		::System::Int32 pointSizeSamplingMode; // 0x20
		::System::Int32 pointSize; // 0x24
		::System::Int32 padding; // 0x28
		::System::Int32 packingMode; // 0x2C
		::System::Int32 atlasWidth; // 0x30
		::System::Int32 atlasHeight; // 0x34
		::System::Int32 characterSetSelectionMode; // 0x38
		::System::Byte _padding0[0x4];
		::System::String* characterSequence; // 0x40
		::System::String* referencedFontAssetGUID; // 0x48
		::System::String* referencedTextAssetGUID; // 0x50
		::System::Int32 fontStyle; // 0x58
		::System::Single fontStyleModifier; // 0x5C
		::System::Int32 renderMode; // 0x60
		::System::Boolean includeFontFeatures; // 0x64
	};
}

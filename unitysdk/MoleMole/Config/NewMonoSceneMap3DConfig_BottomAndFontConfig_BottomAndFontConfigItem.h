#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int NewMonoSceneMap3DConfig_BottomAndFontConfig_BottomAndFontConfigItem_TypeDefinitionIndex = 45124;

	struct alignas(8) NewMonoSceneMap3DConfig_BottomAndFontConfig_BottomAndFontConfigItem
	{
		::System::String* Desc; // 0x10
		::System::String* BottomVisualConfigKey; // 0x18
	};
}

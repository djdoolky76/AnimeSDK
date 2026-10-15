#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ColorGradingMaskWhitelist_TypeDefinitionIndex = 48462;

	struct alignas(8) ColorGradingMaskWhitelist
	{
		::System::Boolean InvertMask; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Object*>* StoryCharacters; // 0x18
		::Il2CppArray<::System::Object*>* StoryVFXs; // 0x20
		::Il2CppArray<::System::Object*>* StageItems; // 0x28
		::Il2CppArray<::System::Object*>* MapEntities; // 0x30
	};
}

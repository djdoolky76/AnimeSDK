#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class AtlasPage; }

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AtlasUtilities_BlendModeAtlasPages_TypeDefinitionIndex = 38232;

	struct alignas(8) AtlasUtilities_BlendModeAtlasPages
	{
		::Spine::AtlasPage* normalPage; // 0x10
		::Spine::AtlasPage* additivePage; // 0x18
		::Spine::AtlasPage* multiplyPage; // 0x20
		::Spine::AtlasPage* screenPage; // 0x28
	};
}

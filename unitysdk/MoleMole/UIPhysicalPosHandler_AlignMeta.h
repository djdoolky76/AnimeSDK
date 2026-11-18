#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_AAKAJFFJCLJ.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIPhysicalPosHandler; }
namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIPhysicalPosHandler_AlignMeta_TypeDefinitionIndex = 47252;

	struct alignas(8) UIPhysicalPosHandler_AlignMeta
	{
		::MoleMole::UIPhysicalPosHandler_AAKAJFFJCLJ alignType; // 0x10
		::System::Byte _padding0[0x4];
		::MoleMole::UIPhysicalPosHandler* alignTarget; // 0x18
		::System::String* alignName; // 0x20
	};
}

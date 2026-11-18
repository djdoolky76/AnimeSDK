#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_NDKECEOPHMI.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_NPCOOOCAKIK.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIButtonPosHandler; }
namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIButtonPosHandler_AlignMeta_TypeDefinitionIndex = 88980;

	struct alignas(8) UIButtonPosHandler_AlignMeta
	{
		::MoleMole::UIButtonPosHandler_NPCOOOCAKIK alignType; // 0x10
		::System::Byte _padding0[0x4];
		::MoleMole::UIButtonPosHandler* alignTarget; // 0x18
		::System::String* alignName; // 0x20
		::MoleMole::UIButtonPosHandler_NDKECEOPHMI selfEdge; // 0x28
		::MoleMole::UIButtonPosHandler_NDKECEOPHMI alignEdge; // 0x2C
		::System::Single distance; // 0x30
	};
}

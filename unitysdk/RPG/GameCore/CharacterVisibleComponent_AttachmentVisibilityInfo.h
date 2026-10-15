#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::GameCore
{
	struct alignas(8) CharacterVisibleComponent_AttachmentVisibilityInfo
	{
		::System::String* AttachmentName; // 0x10
		::System::Boolean Visible; // 0x18
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterGroupMemberType : ::System::Int32
	{
		Standalone = 0,
		Attachment = 1,
		WeakAttachment = 2,
	};
}

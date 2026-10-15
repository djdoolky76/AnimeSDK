#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
namespace System { class String; }

namespace RPG::Client
{
	struct alignas(8) AudienceLayoutConfig_IdentifierConfig
	{
		::RPG::GameCore::NPCBodySize bodySize; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* identifiers; // 0x18
	};
}

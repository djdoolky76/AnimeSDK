#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
namespace System { class String; }

namespace RPG::Client
{
	struct alignas(8) AvatarEmotionClipConfig_EmotionClipEntry
	{
		::RPG::GameCore::EmotionID EmotionID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* EmotionClipPath; // 0x18
	};
}

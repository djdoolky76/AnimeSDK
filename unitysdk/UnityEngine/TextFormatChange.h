#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TextFormat.h"

namespace UnityEngine
{
	struct alignas(4) TextFormatChange
	{
		::System::Int32 startPosition; // 0x10
		::System::Int32 skipCharacters; // 0x14
		::UnityEngine::TextFormat format; // 0x18
		::System::Int32 flags; // 0x58
	};
}

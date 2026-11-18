#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGlobalSoundActionIndexEntry_TypeDefinitionIndex = 38816;

	struct alignas(8) ConfigGlobalSoundActionIndexEntry
	{
		::System::String* Key; // 0x10
		::Foundation::AssetPath AssetPath; // 0x18
	};
}

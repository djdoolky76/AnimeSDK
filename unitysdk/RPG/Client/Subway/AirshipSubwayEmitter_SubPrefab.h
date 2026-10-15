#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubwayEmitter_SubPrefab_TypeDefinitionIndex = 82209;

	struct alignas(8) AirshipSubwayEmitter_SubPrefab
	{
		::System::Single Weight; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* Subs; // 0x18
	};
}

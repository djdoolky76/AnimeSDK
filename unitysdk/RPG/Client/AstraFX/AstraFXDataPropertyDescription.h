#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataPropertyType.h"
namespace System { class String; }

namespace RPG::Client::AstraFX
{
	struct alignas(8) AstraFXDataPropertyDescription
	{
		::System::String* Property; // 0x10
		::RPG::Client::AstraFX::AstraFXDataPropertyType Type; // 0x18
		::System::Boolean Mapping; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* MappingProperty; // 0x20
	};
}

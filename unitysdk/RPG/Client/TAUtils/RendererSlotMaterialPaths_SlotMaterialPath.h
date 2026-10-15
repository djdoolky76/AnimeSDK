#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::TAUtils
{
	struct alignas(8) RendererSlotMaterialPaths_SlotMaterialPath
	{
		::System::Int32 index; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* materialPath; // 0x18
	};
}

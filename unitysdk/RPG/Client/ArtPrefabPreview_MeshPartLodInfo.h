#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client
{
	struct alignas(8) ArtPrefabPreview_MeshPartLodInfo
	{
		::System::String* Name; // 0x10
		::System::String* Path; // 0x18
	};
}

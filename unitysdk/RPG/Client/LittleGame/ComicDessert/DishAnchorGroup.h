#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorEntry.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int DishAnchorGroup_TypeDefinitionIndex = 80084;

	struct alignas(8) DishAnchorGroup
	{
		::System::UInt32 DishID; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::AnchorEntry>* Anchors; // 0x18
	};
}

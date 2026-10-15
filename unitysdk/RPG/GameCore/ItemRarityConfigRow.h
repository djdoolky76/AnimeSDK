#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemRarityConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMRARITYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79B960)
#define RPG_GAMECORE_ITEMRARITYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D79B1F0)

namespace RPG::GameCore
{
	class ItemRarityConfigRow : public ::System::Object
	{
	public:
		::System::String* LineItemRarityColor; // 0x10
		::System::String* AvatarShowBgPath; // 0x18
		::System::String* FrameItemRarityPath; // 0x20
		::System::String* ItemShowBgPath; // 0x28
		::System::String* FrameIconRarityPath; // 0x30
		::System::String* FrameItemRarityColor; // 0x38
		::System::String* FrameItemRarityBgPath; // 0x40
		::System::String* ItemRarityStarImgPath; // 0x48
		::RPG::GameCore::ItemRarity Rarity; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemRarityConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemRarityConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

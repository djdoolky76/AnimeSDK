#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE52C20)
#define RPG_GAMECORE_TREASUREDUNGEONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE52660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonConfigRow_TypeDefinitionIndex = 12587;

	class TreasureDungeonConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x18
		::Il2CppArray<::System::UInt32>* DisplayMonsterIDList; // 0x20
		::System::String* ImgPath; // 0x28
		::System::String* EntranceIconPath; // 0x30
		::System::UInt32 GridPrefabType; // 0x38
		::System::UInt32 GroupID; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 ExploreSubHpRatio; // 0x50
		::System::UInt32 DungeonID; // 0x54
		::System::UInt32 UnlockID; // 0x58
		::System::UInt32 InitialExplore; // 0x5C
		::System::UInt32 PreDungeonID; // 0x60
		::System::UInt32 GridExploreCost; // 0x64
		::System::UInt32 MaxExplore; // 0x68
		::System::UInt32 DisplayEventID; // 0x6C
		::RPG::Client::TextID Desc; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TreasureDungeonConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TreasureDungeonConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OINLMMCBCFN;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueTournCocoonConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCOCOONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA35790)
#define RPG_GAMECORE_ROGUETOURNCOCOONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA352A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCocoonConfigRow_TypeDefinitionIndex = 14987;

	class RogueTournCocoonConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DropList; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x18
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendDamageTypes; // 0x20
		::Il2CppArray<::OINLMMCBCFN*>* DisplayMonsterMap; // 0x28
		::System::String* PicPath; // 0x30
		::System::UInt32 RecommendLevel; // 0x38
		::System::UInt32 Difficulty; // 0x3C
		::System::UInt32 MaxChallengeCnt; // 0x40
		::System::UInt32 NpcMonsterID; // 0x44
		::System::UInt32 RogueKeyCost; // 0x48
		::System::UInt32 WorldLevel; // 0x4C
		::System::UInt32 DisplayID; // 0x50
		::System::UInt32 FuncUnlockID; // 0x54
		::System::UInt32 StaminaCost; // 0x58
		::System::UInt32 ID; // 0x5C
		::System::UInt32 EventID; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOCOONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournCocoonConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournCocoonConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOCOONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

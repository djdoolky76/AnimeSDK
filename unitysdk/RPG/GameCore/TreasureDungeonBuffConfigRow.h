#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonBuffType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonBuffConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC11B60)
#define RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC11560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonBuffConfigRow_TypeDefinitionIndex = 12536;

	class TreasureDungeonBuffConfigRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x18
		::System::UInt32 UseTime; // 0x20
		::System::UInt32 DisplayRarity; // 0x24
		::RPG::Client::TextID BattleTargetBouns; // 0x28
		::System::Boolean IsSaveNextFloor; // 0x38
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TreasureDungeonBuffType Type; // 0x3C
		::System::UInt32 ParamInt; // 0x40
		::System::UInt32 TargetBounsParam; // 0x44
		::RPG::Client::TextID Desc; // 0x48
		::RPG::Client::TextID BgDesc; // 0x58
		::System::UInt32 BuffGroupID; // 0x68
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID Name; // 0x70
		::System::UInt32 BattleTargetID; // 0x80
		::System::UInt32 BuffID; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TreasureDungeonBuffConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TreasureDungeonBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONBUFFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

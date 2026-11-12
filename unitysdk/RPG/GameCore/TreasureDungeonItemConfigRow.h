#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonItemType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonItemConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE54F10)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE54690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonItemConfigRow_TypeDefinitionIndex = 12601;

	class TreasureDungeonItemConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x18
		::System::String* AudioEventName; // 0x20
		::System::String* IconPath2D; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::RPG::Client::TextID Desc; // 0x40
		::RPG::GameCore::TreasureDungeonItemType Type; // 0x50
		::System::UInt32 ItemID; // 0x54
		::System::UInt32 ParamInt; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TreasureDungeonItemConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TreasureDungeonItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

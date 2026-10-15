#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonItemType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonItemConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC41CD0)
#define RPG_GAMECORE_TREASUREDUNGEONITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC41450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonItemConfigRow_TypeDefinitionIndex = 12534;

	class TreasureDungeonItemConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* AudioEventName; // 0x20
		::System::String* IconPath2D; // 0x28
		::RPG::GameCore::TreasureDungeonItemType Type; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID Desc; // 0x48
		::System::UInt32 ParamInt; // 0x58
		::System::UInt32 ItemID; // 0x5C
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

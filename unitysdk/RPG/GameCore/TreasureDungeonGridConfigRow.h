#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridEffectType.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonGridConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE538E0)
#define RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE533D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGridConfigRow_TypeDefinitionIndex = 12595;

	class TreasureDungeonGridConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::System::String* IconPath2D; // 0x18
		::System::String* TutorialTriggerString; // 0x20
		::System::String* IconPath; // 0x28
		::System::UInt32 OpenBuff; // 0x30
		::RPG::GameCore::TreasureDungeonGridType GridType; // 0x34
		::System::UInt32 ReplaceGridID; // 0x38
		::System::UInt32 ParamInt; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID Desc; // 0x50
		::System::UInt32 GridID; // 0x60
		::RPG::GameCore::TreasureDungeonGridEffectType EffectType; // 0x64
		::System::UInt32 GridSubType; // 0x68
		::System::UInt32 TutorialTriggerType; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TreasureDungeonGridConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TreasureDungeonGridConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

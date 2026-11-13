#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityEvolveBuildGearCollectionRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5070E0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E5064C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildGearCollectionRow_TypeDefinitionIndex = 11453;

	class ActivityEvolveBuildGearCollectionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TagList; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* ElementList; // 0x18
		::System::String* DamageCustomName; // 0x20
		::System::String* ItemIcon; // 0x28
		::System::UInt32 UnlockQuest; // 0x30
		::RPG::GameCore::EvolveBuildSeason Season; // 0x34
		::System::UInt32 ID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x40
		::RPG::GameCore::EvolveGearType Type; // 0x50
		::System::UInt32 LvMax; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

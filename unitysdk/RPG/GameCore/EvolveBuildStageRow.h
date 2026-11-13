#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
class CNCHEGIMEJM;
class FCOEMCEDLNL;
class KFGPEAIMBJK;
namespace RPG::GameCore { class EvolveBuildStageRow; }
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC80710)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC7E690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStageRow_TypeDefinitionIndex = 11461;

	class EvolveBuildStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StagePeriod1; // 0x10
		::Il2CppArray<::KFGPEAIMBJK*>* RankList; // 0x18
		::Il2CppArray<::System::UInt32>* TrialAvatar; // 0x20
		::Il2CppArray<::System::UInt32>* StagePeriod4; // 0x28
		::Il2CppArray<::System::UInt32>* FirstWinQuest; // 0x30
		::Il2CppArray<::System::UInt32>* StagePeriod3; // 0x38
		::Il2CppArray<::System::UInt32>* GearRecommendList; // 0x40
		::Il2CppArray<::CNCHEGIMEJM*>* RecommendList; // 0x48
		::Il2CppArray<::System::UInt32>* InitialWeapon; // 0x50
		::System::String* TeamBonusIconPath; // 0x58
		::Il2CppArray<::System::UInt32>* StagePeriod2; // 0x60
		::RPG::Client::TextID BuffTextFormat; // 0x68
		::RPG::Client::TextID Name; // 0x78
		::RPG::Client::TextID TeamBonusShortDesc; // 0x88
		::RPG::Client::TextID PreName; // 0x98
		::RPG::Client::TextID DevilDesc; // 0xA8
		::System::Int32 Difficulty; // 0xB8
		::System::Boolean WeaponSelectable; // 0xBC
		::System::Byte _padding0[0x3];
		::System::UInt32 TeamBonusMazeBuffID; // 0xC0
		::System::UInt32 StageMergedID; // 0xC4
		::System::UInt32 UnlockQuest; // 0xC8
		::RPG::GameCore::EvolveBuildSeason Season; // 0xCC
		::RPG::Client::TextID Desc; // 0xD0
		::System::UInt32 IntroID; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

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

#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D65B270)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6591F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStageRow_TypeDefinitionIndex = 11410;

	class EvolveBuildStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StagePeriod4; // 0x10
		::Il2CppArray<::System::UInt32>* GearRecommendList; // 0x18
		::Il2CppArray<::System::UInt32>* TrialAvatar; // 0x20
		::System::String* TeamBonusIconPath; // 0x28
		::Il2CppArray<::KFGPEAIMBJK*>* RankList; // 0x30
		::Il2CppArray<::System::UInt32>* StagePeriod1; // 0x38
		::Il2CppArray<::System::UInt32>* StagePeriod3; // 0x40
		::Il2CppArray<::CNCHEGIMEJM*>* RecommendList; // 0x48
		::Il2CppArray<::System::UInt32>* FirstWinQuest; // 0x50
		::Il2CppArray<::System::UInt32>* StagePeriod2; // 0x58
		::Il2CppArray<::System::UInt32>* InitialWeapon; // 0x60
		::System::UInt32 TeamBonusMazeBuffID; // 0x68
		::System::Boolean WeaponSelectable; // 0x6C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID BuffTextFormat; // 0x70
		::RPG::Client::TextID Desc; // 0x80
		::RPG::Client::TextID TeamBonusShortDesc; // 0x90
		::RPG::GameCore::EvolveBuildSeason Season; // 0xA0
		::System::UInt32 UnlockQuest; // 0xA4
		::RPG::Client::TextID DevilDesc; // 0xA8
		::System::UInt32 StageMergedID; // 0xB8
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID Name; // 0xC0
		::RPG::Client::TextID PreName; // 0xD0
		::System::Int32 Difficulty; // 0xE0
		::System::UInt32 IntroID; // 0xE4
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

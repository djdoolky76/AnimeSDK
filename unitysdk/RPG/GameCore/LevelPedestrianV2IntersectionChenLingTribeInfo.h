#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeDropPointInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C5C00)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C5C50)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C5B80)

namespace RPG::GameCore
{
	class LevelPedestrianV2IntersectionChenLingTribeInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::UInt32 MaxMemberCount; // 0x50
		::System::UInt32 MemberEmitSpeed; // 0x54
		::System::Single SlotRadius; // 0x58
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*>* EnterRoadEntries; // 0x60
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*>* ExitRoadEntries; // 0x68
		::System::Single OverrideExitTriggerRadius; // 0x70
		::System::Byte _padding1[0x4];
		::System::String* ExitTriggerAnim; // 0x78
		::System::Single ExitSpeedRatio; // 0x80
		::RPG::MVector2 RandomAutoLeaveRange; // 0x84
		::System::Boolean AllowMemberActivity; // 0x8C
		::System::Byte _padding2[0x3];
		::System::Single DropPercent; // 0x90
		::System::Byte _padding3[0x4];
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*>* DropPoints; // 0x98
		::System::String* ChenLingStackGroupCollectionConfigPath; // 0xA0
		::Il2CppArray<::System::String*>* ChenLingStackGroupUniqueNames; // 0xA8
		::System::Single ChenLingStackGroupWeight; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

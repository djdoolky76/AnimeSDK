#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParkourLevelUnlockType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourLevelConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PARKOURLEVELCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F143BF0)
#define RPG_GAMECORE_PARKOURLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F143570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourLevelConfigRow_TypeDefinitionIndex = 12154;

	class ParkourLevelConfigRow : public ::System::Object
	{
	public:
		::System::String* MinimapResPath; // 0x10
		::System::String* GameAssetPath; // 0x18
		::Il2CppArray<::System::UInt32>* BGMIDList; // 0x20
		::System::String* GameAssetPathOnClear; // 0x28
		::System::String* TriggerCarTaskUnlock; // 0x30
		::System::Single LevelRegionState; // 0x38
		::System::UInt32 LapCount; // 0x3C
		::System::UInt32 UnlockParam; // 0x40
		::System::UInt32 TargetRank; // 0x44
		::System::Boolean StoryLevel; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 RailBallLimit; // 0x4C
		::RPG::Client::TextID FinishDisplay; // 0x50
		::RPG::Client::TextID Name; // 0x60
		::System::Single MinimapAngle; // 0x70
		::System::UInt32 NextStorySubMissionID; // 0x74
		::RPG::Client::TextID Desc; // 0x78
		::System::UInt32 ID; // 0x88
		::RPG::GameCore::ParkourLevelUnlockType UnlockType; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourLevelConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourLevelConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

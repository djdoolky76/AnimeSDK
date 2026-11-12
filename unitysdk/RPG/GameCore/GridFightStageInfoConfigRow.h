#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightStageInfoConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E956700)
#define RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E956080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageInfoConfigRow_TypeDefinitionIndex = 11666;

	class GridFightStageInfoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CardStolenList; // 0x10
		::Il2CppArray<::System::UInt32>* ThresholdBonusList; // 0x18
		::Il2CppArray<::System::UInt32>* VictoryBonusList; // 0x20
		::System::UInt32 StageRuleID; // 0x28
		::System::UInt32 ThresholdFailGlobalHPLose; // 0x2C
		::System::UInt32 EliteProgressValue; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint AvatarReviveDelayLose; // 0x38
		::RPG::GameCore::FixPoint TotalTurn; // 0x40
		::System::UInt32 EliteGlobalHPLose; // 0x48
		::System::UInt32 StageID; // 0x4C
		::System::UInt32 MinionProgressValue; // 0x50
		::System::UInt32 WaveIndex; // 0x54
		::System::UInt32 BossGlobalHPLose; // 0x58
		::System::UInt32 BossProgressValue; // 0x5C
		::System::UInt32 ThresholdPassBasicGlobalHPLose; // 0x60
		::System::UInt32 MinionGlobalHPLose; // 0x64
		::RPG::Client::TextID StageDescription; // 0x68
		::RPG::GameCore::FixPoint ThresholdPosition; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightStageInfoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightStageInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

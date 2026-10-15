#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_PositionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_MoveToPosition; }
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_MOVETOPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA51EE0)
#define RPG_GAMECORE_ST_MAIN_MOVETOPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA51F10)
#define RPG_GAMECORE_ST_MAIN_MOVETOPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA51E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_MoveToPosition_TypeDefinitionIndex = 20100;

	class ST_Main_MoveToPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_PositionType PositionType; // 0x18
		::System::UInt32 PointID; // 0x1C
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x20
		::System::Boolean StanceUseVariable; // 0x24
		::System::Byte _padding0[0x3];
		::System::String* StanceVariableName; // 0x28
		::System::Boolean SkipStartTurn; // 0x30
		::System::Boolean FinishAfterStop; // 0x31
		::System::Byte _padding1[0x2];
		::System::Single SpeedScale; // 0x34
		::System::Single TargetSampleRadius; // 0x38
		::System::Boolean AccurateStop; // 0x3C
		::System::Boolean AlignRotation; // 0x3D
		::System::Boolean SetReachConfig; // 0x3E
		::System::Byte _padding2[0x1];
		::System::Single ReachRadius; // 0x40
		::System::Single ReachAngle; // 0x44
		::System::Boolean SetBlockConfig; // 0x48
		::System::Byte _padding3[0x3];
		::System::Single BlockSampleInterval; // 0x4C
		::System::Int32 BlockSampleCount; // 0x50
		::System::Single BlockDetectDistance; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVETOPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_MoveToPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_MoveToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVETOPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_MoveToPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_MoveToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVETOPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

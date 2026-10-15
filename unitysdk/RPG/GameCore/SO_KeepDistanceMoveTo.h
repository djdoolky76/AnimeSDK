#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
#include "unitysdk/RPG/GameCore/SO_PositionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SO_KeepDistanceMoveTo; }

#define RPG_GAMECORE_SO_KEEPDISTANCEMOVETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6FB90)
#define RPG_GAMECORE_SO_KEEPDISTANCEMOVETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6FBB0)
#define RPG_GAMECORE_SO_KEEPDISTANCEMOVETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70CB0)

namespace RPG::GameCore
{
	class SO_KeepDistanceMoveTo : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::RPG::GameCore::SO_PositionType PositionType; // 0x18
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x1C
		::System::Single StartRunDistance; // 0x20
		::System::Single StartSprintDistance; // 0x24
		::System::Single FreeScaleDistance; // 0x28
		::System::Single ScaleInterval; // 0x2C
		::System::Single TransitionTime; // 0x30
		::System::Single PlayerSpeedRatio; // 0x34
		::System::Single ScaleStep; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_KEEPDISTANCEMOVETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_KeepDistanceMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_KeepDistanceMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_KEEPDISTANCEMOVETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_KeepDistanceMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_KeepDistanceMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_KEEPDISTANCEMOVETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

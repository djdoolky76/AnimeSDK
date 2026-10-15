#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
#include "unitysdk/RPG/GameCore/SO_PositionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SO_MoveTo; }

#define RPG_GAMECORE_SO_MOVETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6FEF0)
#define RPG_GAMECORE_SO_MOVETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6FF00)
#define RPG_GAMECORE_SO_MOVETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70D00)

namespace RPG::GameCore
{
	class SO_MoveTo : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::RPG::GameCore::SO_PositionType PositionType; // 0x18
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x1C
		::System::Boolean SkipStartTurn; // 0x20
		::System::Boolean FinishAfterStop; // 0x21
		::System::Boolean AccurateStop; // 0x22
		::System::Boolean AlignRotation; // 0x23
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_MOVETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_MoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_MoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_MOVETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_MoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_MoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_MOVETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

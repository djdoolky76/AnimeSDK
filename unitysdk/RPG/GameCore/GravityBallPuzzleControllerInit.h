#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GravityBallControlMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GravityBallPuzzleControllerInit; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D723400)
#define RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D723470)
#define RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D723370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallPuzzleControllerInit_TypeDefinitionIndex = 20377;

	class GravityBallPuzzleControllerInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* InitPuzzleID; // 0x18
		::RPG::GameCore::TargetEvaluator* WallProp; // 0x20
		::RPG::GameCore::TargetEvaluator* DstProp; // 0x28
		::RPG::GameCore::TargetEvaluator* WallBGProp; // 0x30
		::RPG::GameCore::GravityBallControlMode ControlMode; // 0x38
		::System::Single FinishProtectTime; // 0x3C
		::RPG::GameCore::DynamicFloat* RelativeSwitchHandPuzzleID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallPuzzleControllerInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallPuzzleControllerInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallPuzzleControllerInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallPuzzleControllerInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

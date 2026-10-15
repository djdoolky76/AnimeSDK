#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropCurveMoveModifySpeed; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D946C50)
#define RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D946C90)
#define RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D946BF0)

namespace RPG::GameCore
{
	class PropCurveMoveModifySpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* MoveSpeedFactor; // 0x20
		::RPG::GameCore::DynamicFloat* BlendDuration; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveModifySpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveModifySpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveModifySpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveModifySpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

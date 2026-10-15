#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CalcElevatorLoopTime; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_CALCELEVATORLOOPTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D526A80)
#define RPG_GAMECORE_CALCELEVATORLOOPTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D526A90)
#define RPG_GAMECORE_CALCELEVATORLOOPTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D526A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CalcElevatorLoopTime_TypeDefinitionIndex = 20496;

	class CalcElevatorLoopTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Elevator2FHeight; // 0x18
		::RPG::GameCore::DynamicFloat* MoveDistanceBSAS; // 0x20
		::RPG::GameCore::DynamicFloat* MoveDistanceLoop; // 0x28
		::Il2CppArray<::System::String*>* LoopAnimStateNameArray; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCELEVATORLOOPTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CalcElevatorLoopTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CalcElevatorLoopTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCELEVATORLOOPTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CalcElevatorLoopTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CalcElevatorLoopTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCELEVATORLOOPTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

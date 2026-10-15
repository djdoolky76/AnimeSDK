#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DronesPuzzleEventListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D626DB0)
#define RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D626DC0)
#define RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D626D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DronesPuzzleEventListener_TypeDefinitionIndex = 20374;

	class DronesPuzzleEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LeaveSafeAreaCallback; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LeaveMoveAreaCallback; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SwitchFPSCallback; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SwitchTPSCallback; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ChaseEnemyAddCallback; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DronesPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DronesPuzzleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DronesPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DronesPuzzleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DronesSwitchDynamicCollider; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F95F0)
#define RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5F9600)
#define RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F95C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DronesSwitchDynamicCollider_TypeDefinitionIndex = 20373;

	class DronesSwitchDynamicCollider : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* UniqueKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DronesSwitchDynamicCollider* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DronesSwitchDynamicCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DronesSwitchDynamicCollider* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DronesSwitchDynamicCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

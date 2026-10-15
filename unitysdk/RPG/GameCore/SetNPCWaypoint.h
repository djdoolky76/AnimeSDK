#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetNPCWaypoint; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaypointConfig; }

#define RPG_GAMECORE_SETNPCWAYPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA90170)
#define RPG_GAMECORE_SETNPCWAYPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA90180)
#define RPG_GAMECORE_SETNPCWAYPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA90120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNPCWaypoint_TypeDefinitionIndex = 20290;

	class SetNPCWaypoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupInstanceID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::WaypointConfig*>* WaypointCfgs; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BehaviourList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNPCWaypoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNPCWaypoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNPCWaypoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNPCWaypoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

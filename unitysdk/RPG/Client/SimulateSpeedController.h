#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFMJJDEDODL;
namespace RPG::GameCore { class TimeScaleStack; }

#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_ADDSIMULATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1B415E80)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1B415AB0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1B415C10)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_ISSPEEDUP_OFFSET UNITYSDK_OFFSET(0x1B416050)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0x1B415FF0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B416030)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1B415FD0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_S_SIMULATIONPAUSECOUNT_OFFSET UNITYSDK_OFFSET(0x1B416010)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_REFRESHSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1B415CD0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_REMOVESIMULATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1B415ED0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0x1B415F80)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1B415F20)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0x1B416000)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B416040)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1B415FE0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_S_SIMULATIONPAUSECOUNT_OFFSET UNITYSDK_OFFSET(0x1B416020)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER__ONSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B415C70)

namespace RPG::Client
{
	inline static constexpr unsigned int SimulateSpeedController_TypeDefinitionIndex = 75460;

	class SimulateSpeedController : public ::System::Object
	{
	public:
		::RPG::GameCore::TimeScaleStack* SimulationTimeScaleStack; // 0x10
		::DFMJJDEDODL* _SimulationSpeed; // 0x18
		::System::Single _SimulationSpeedInternal_k__BackingField; // 0x20
		::System::Single _SimulationSpeed_k__BackingField; // 0x24
		::System::Boolean _SimulationSpeedEnable_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 _s_SimulationPauseCount_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Single GetSimulationSpeed(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GETSIMULATIONSPEED_OFFSET))(this, a1);
		}

		::System::Void _OnSimulationUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER__ONSIMULATIONUPDATE_OFFSET))(this, a1);
		}

		::System::Void AddSimulationPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_ADDSIMULATIONPAUSE_OFFSET))(this);
		}

		::System::Void RemoveSimulationPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_REMOVESIMULATIONPAUSE_OFFSET))(this);
		}

		::System::Void SetSimulationSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEED_OFFSET))(this, a1);
		}

		::System::Void SetSimulationSpeedEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEEDENABLE_OFFSET))(this, a1);
		}

		::System::Void RefreshSimulationSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_REFRESHSIMULATIONSPEED_OFFSET))(this);
		}

		::System::Single get_SimulationSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEED_OFFSET))(this);
		}

		::System::Void set_SimulationSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEED_OFFSET))(this, a1);
		}

		::System::Boolean get_SimulationSpeedEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDENABLE_OFFSET))(this);
		}

		::System::Void set_SimulationSpeedEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDENABLE_OFFSET))(this, a1);
		}

		::System::Int32 get_s_SimulationPauseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_S_SIMULATIONPAUSECOUNT_OFFSET))(this);
		}

		::System::Void set_s_SimulationPauseCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_S_SIMULATIONPAUSECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_SimulationSpeedInternal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDINTERNAL_OFFSET))(this);
		}

		::System::Void set_SimulationSpeedInternal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDINTERNAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_ISSPEEDUP_OFFSET))(this);
		}

	};
}

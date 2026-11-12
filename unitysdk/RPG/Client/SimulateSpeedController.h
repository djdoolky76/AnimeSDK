#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFMJJDEDODL;
namespace RPG::GameCore { class TimeScaleStack; }

#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_ADDSIMULATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xEB49AA0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xEB496D0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xEB49830)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_ISSPEEDUP_OFFSET UNITYSDK_OFFSET(0xEB49C70)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xEB49C10)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xEB49C50)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xEB49BF0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_GET_S_SIMULATIONPAUSECOUNT_OFFSET UNITYSDK_OFFSET(0xEB49C30)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_REFRESHSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xEB498F0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_REMOVESIMULATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xEB49AF0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xEB49BA0)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xEB49B40)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xEB49C20)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xEB49C60)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xEB49C00)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER_SET_S_SIMULATIONPAUSECOUNT_OFFSET UNITYSDK_OFFSET(0xEB49C40)
#define RPG_CLIENT_SIMULATESPEEDCONTROLLER__ONSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0xEB49890)

namespace RPG::Client
{
	inline static constexpr unsigned int SimulateSpeedController_TypeDefinitionIndex = 75461;

	class SimulateSpeedController : public ::System::Object
	{
	public:
		::DFMJJDEDODL* _SimulationSpeed; // 0x10
		::RPG::GameCore::TimeScaleStack* SimulationTimeScaleStack; // 0x18
		::System::Boolean _SimulationSpeedEnable_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single _SimulationSpeed_k__BackingField; // 0x24
		::System::Int32 _s_SimulationPauseCount_k__BackingField; // 0x28
		::System::Single _SimulationSpeedInternal_k__BackingField; // 0x2C
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

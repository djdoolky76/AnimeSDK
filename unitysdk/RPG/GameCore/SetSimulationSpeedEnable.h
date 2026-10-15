#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetSimulationSpeedEnable; }

#define RPG_GAMECORE_SETSIMULATIONSPEEDENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA937C0)
#define RPG_GAMECORE_SETSIMULATIONSPEEDENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA937D0)
#define RPG_GAMECORE_SETSIMULATIONSPEEDENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSimulationSpeedEnable_TypeDefinitionIndex = 23765;

	class SetSimulationSpeedEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIMULATIONSPEEDENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSimulationSpeedEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSimulationSpeedEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIMULATIONSPEEDENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSimulationSpeedEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSimulationSpeedEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIMULATIONSPEEDENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

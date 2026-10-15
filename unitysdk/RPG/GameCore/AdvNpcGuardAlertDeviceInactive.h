#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcGuardAlertDeviceInactive; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D379D70)
#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D379D80)
#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D379D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcGuardAlertDeviceInactive_TypeDefinitionIndex = 19992;

	class AdvNpcGuardAlertDeviceInactive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnActiveByAlertValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEINACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

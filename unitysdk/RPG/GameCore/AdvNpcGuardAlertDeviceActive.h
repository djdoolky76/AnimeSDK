#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcGuardAlertDeviceActive; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A7620)
#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A7630)
#define RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A75F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcGuardAlertDeviceActive_TypeDefinitionIndex = 19993;

	class AdvNpcGuardAlertDeviceActive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TargetPlayerWhenActive; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AlertClearWhenActive; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerEnterAgain; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDALERTDEVICEACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

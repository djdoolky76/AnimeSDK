#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLeverSwitchState.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FiveDimLeverSwitchConfig; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C6C50)
#define RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C6C60)
#define RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C6C20)

namespace RPG::GameCore
{
	class FiveDimLeverSwitchConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsLeverSwitch; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* LeftValues; // 0x20
		::Il2CppArray<::System::Int16>* RightValues; // 0x28
		::RPG::GameCore::FiveDimLeverSwitchState DefautState; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x38
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x40
		::RPG::GameCore::FiveDimEffectItem* ArrowInteractEffect; // 0x48
		::System::Single ArrowInteractEffectDelay; // 0x50
		::System::Boolean SendEventOnInit; // 0x54
		::System::Byte _padding2[0x3];
		::RPG::GameCore::LittleGameEvent* SwitchLeftEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* SwitchRightEvent; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLeverSwitchConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLeverSwitchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLeverSwitchConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLeverSwitchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

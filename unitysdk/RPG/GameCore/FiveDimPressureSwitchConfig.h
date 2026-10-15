#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPressureSwitchConfig; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D31D0)
#define RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D31E0)
#define RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D31A0)

namespace RPG::GameCore
{
	class FiveDimPressureSwitchConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPressureSwitch; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* PressValues; // 0x20
		::Il2CppArray<::System::Int16>* ReleaseValues; // 0x28
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x30
		::System::Boolean CanRelease; // 0x38
		::System::Boolean SendEventOnInit; // 0x39
		::System::Byte _padding1[0x6];
		::RPG::GameCore::LittleGameEvent* PressEvent; // 0x40
		::RPG::GameCore::LittleGameEvent* ReleaseEvent; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPressureSwitchConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPressureSwitchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPressureSwitchConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPressureSwitchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

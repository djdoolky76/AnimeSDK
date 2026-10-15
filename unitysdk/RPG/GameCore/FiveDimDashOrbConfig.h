#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DashOverrideCalcMode.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDashBasicConfig; }
namespace RPG::GameCore { class FiveDimDashOrbConfig; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDASHORBCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B8280)
#define RPG_GAMECORE_FIVEDIMDASHORBCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B8290)
#define RPG_GAMECORE_FIVEDIMDASHORBCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B8250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDashOrbConfig_TypeDefinitionIndex = 18577;

	class FiveDimDashOrbConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsDashOrb; // 0x10
		::System::Boolean OverrideDashParam; // 0x11
		::System::Byte _padding0[0x2];
		::RPG::GameCore::DashOverrideCalcMode OverrideCalcMode; // 0x14
		::RPG::GameCore::FiveDimDashBasicConfig* DashBasicConfigOverride; // 0x18
		::System::Boolean IsUpgradeDash; // 0x20
		::System::Boolean IsAutoDash; // 0x21
		::System::Byte _padding1[0x6];
		::System::String* SnapAttachPoint; // 0x28
		::System::Single SnapTime; // 0x30
		::System::Single DelayDashTime; // 0x34
		::RPG::GameCore::FiveDimTriggerShape* OrbTrigger; // 0x38
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DashOrbAbsorbEffects; // 0x40
		::RPG::GameCore::LittleGameEvent* EnterEvent; // 0x48
		::RPG::GameCore::LittleGameEvent* TriggerDashEvent; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHORBCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDashOrbConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDashOrbConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHORBCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDashOrbConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDashOrbConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHORBCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSwitchPlatformConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B2F00)
#define RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B2F10)
#define RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B2ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSwitchPlatformConfig_TypeDefinitionIndex = 18559;

	class FiveDimSwitchPlatformConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSwitchPlatform; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::System::Boolean DefaultActive; // 0x30
		::System::Boolean DisableColliderOnInactive; // 0x31
		::System::Boolean DisableRenderOnInactive; // 0x32
		::System::Byte _padding1[0x5];
		::System::String* PlaceholderRIStateName; // 0x38
		::System::Boolean SendEventOnInit; // 0x40
		::System::Byte _padding2[0x7];
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x48
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* DelayActiveEvent; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSwitchPlatformConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSwitchPlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSwitchPlatformConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSwitchPlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

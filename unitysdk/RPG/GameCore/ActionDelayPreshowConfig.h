#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ACTIONDELAYPRESHOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D316C20)
#define RPG_GAMECORE_ACTIONDELAYPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3166E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionDelayPreshowConfig_TypeDefinitionIndex = 18179;

	class ActionDelayPreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AddDelayValue; // 0x10
		::RPG::GameCore::DynamicFloat* AddDelayRatio; // 0x18
		::RPG::GameCore::DynamicFloat* SetDelayValue; // 0x20
		::RPG::GameCore::DynamicFloat* AddSpeedValue; // 0x28
		::RPG::GameCore::DynamicFloat* AddSpeedRatio; // 0x30
		::RPG::GameCore::DynamicFloat* SetSpeedValue; // 0x38
		::RPG::GameCore::DynamicFloat* AddExtraSpeedRatio1; // 0x40
		::RPG::GameCore::DynamicFloat* AddExtraSpeedRatio2; // 0x48
		::RPG::GameCore::DynamicFloat* AddExtraSpeedRatio3; // 0x50
		::RPG::GameCore::DynamicFloat* AddExtraSpeedRatio4; // 0x58
		::System::Boolean ImmediateAction; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONDELAYPRESHOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionDelayPreshowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONDELAYPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

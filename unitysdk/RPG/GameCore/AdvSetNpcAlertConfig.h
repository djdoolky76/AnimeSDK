#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetNpcAlertConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETNPCALERTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B0630)
#define RPG_GAMECORE_ADVSETNPCALERTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B0670)
#define RPG_GAMECORE_ADVSETNPCALERTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B05D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetNpcAlertConfig_TypeDefinitionIndex = 20343;

	class AdvSetNpcAlertConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AlertSystemEnable; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single AlertLimitMin; // 0x24
		::System::Single AlertLimitMax; // 0x28
		::System::Single AlertGuardLimitMin; // 0x2C
		::System::Single AlertGuardLimitMax; // 0x30
		::System::Single AlertDeclineSpeed; // 0x34
		::System::Single AlertDeclineProtectTime; // 0x38
		::System::Single AlertUIShowDistance; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCALERTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetNpcAlertConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetNpcAlertConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCALERTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetNpcAlertConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetNpcAlertConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCALERTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

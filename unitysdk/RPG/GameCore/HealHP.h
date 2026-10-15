#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class HealHP; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HEALHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7283A0)
#define RPG_GAMECORE_HEALHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D728500)
#define RPG_GAMECORE_HEALHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D728220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HealHP_TypeDefinitionIndex = 22627;

	class HealHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* HealerTargetType; // 0x20
		::System::Boolean AliveOnly; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::HealFormulaType FormulaType; // 0x2C
		::RPG::GameCore::DynamicFloat* HealPercentage; // 0x30
		::RPG::GameCore::DynamicFloat* SPHitRatio; // 0x38
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x40
		::System::Boolean IsHealRallyHP; // 0x48
		::System::Boolean ScreenSpaceFloatMsg; // 0x49
		::System::Byte _padding1[0x6];
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x50
		::RPG::GameCore::DynamicFloat* PerformanceDelay; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEALHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HealHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HealHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEALHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HealHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HealHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEALHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

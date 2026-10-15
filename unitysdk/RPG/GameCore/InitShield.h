#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShieldFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class InitShield; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_INITSHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D788A40)
#define RPG_GAMECORE_INITSHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D788AB0)
#define RPG_GAMECORE_INITSHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7889B0)

namespace RPG::GameCore
{
	class InitShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ShieldFormulaType FormulaType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ShieldValue; // 0x28
		::RPG::GameCore::DynamicFloat* ShieldPercentage; // 0x30
		::System::Boolean UseAddedRatio; // 0x38
		::System::Boolean ShowText; // 0x39
		::System::Byte _padding1[0x6];
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x40
		::RPG::GameCore::TargetEvaluator* DisplayTarget; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITSHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITSHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITSHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

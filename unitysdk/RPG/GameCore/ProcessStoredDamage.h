#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ProcessStoredDamage; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROCESSSTOREDDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D942A30)
#define RPG_GAMECORE_PROCESSSTOREDDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D942AD0)
#define RPG_GAMECORE_PROCESSSTOREDDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D942970)

namespace RPG::GameCore
{
	class ProcessStoredDamage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* DefaultAttacker; // 0x20
		::RPG::GameCore::DynamicFloat* DamageRatio; // 0x28
		::System::Boolean CanOverkill; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSSTOREDDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ProcessStoredDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ProcessStoredDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSSTOREDDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ProcessStoredDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ProcessStoredDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSSTOREDDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

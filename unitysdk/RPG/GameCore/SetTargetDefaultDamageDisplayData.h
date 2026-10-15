#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class SetTargetDefaultDamageDisplayData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC53F0)
#define RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC5400)
#define RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC53C0)

namespace RPG::GameCore
{
	class SetTargetDefaultDamageDisplayData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x20
		::System::Boolean IsReset; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetDefaultDamageDisplayData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetDefaultDamageDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetDefaultDamageDisplayData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetDefaultDamageDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

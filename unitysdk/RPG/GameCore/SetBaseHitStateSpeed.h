#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBaseHitStateSpeed; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETBASEHITSTATESPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA96160)
#define RPG_GAMECORE_SETBASEHITSTATESPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA96170)
#define RPG_GAMECORE_SETBASEHITSTATESPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA96130)

namespace RPG::GameCore
{
	class SetBaseHitStateSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBASEHITSTATESPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBaseHitStateSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBaseHitStateSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBASEHITSTATESPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBaseHitStateSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBaseHitStateSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBASEHITSTATESPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTargetUniqueName; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETUNIQUENAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC67B0)
#define RPG_GAMECORE_SETTARGETUNIQUENAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC67F0)
#define RPG_GAMECORE_SETTARGETUNIQUENAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC6750)

namespace RPG::GameCore
{
	class SetTargetUniqueName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FormatString UniqueName; // 0x20
		::System::Boolean SetEntityName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETUNIQUENAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetUniqueName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetUniqueName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETUNIQUENAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetUniqueName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetUniqueName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETUNIQUENAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

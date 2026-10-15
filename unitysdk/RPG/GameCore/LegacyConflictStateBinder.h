#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LegacyConflictStateBinder; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A35E0)
#define RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A35F0)
#define RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A35B0)

namespace RPG::GameCore
{
	class LegacyConflictStateBinder : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* InConflictState; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OutConflictState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LegacyConflictStateBinder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LegacyConflictStateBinder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LegacyConflictStateBinder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LegacyConflictStateBinder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEGACYCONFLICTSTATEBINDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

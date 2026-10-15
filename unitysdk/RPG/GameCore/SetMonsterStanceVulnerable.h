#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMonsterStanceVulnerable; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABCA20)
#define RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABCA30)
#define RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABC9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterStanceVulnerable_TypeDefinitionIndex = 22941;

	class SetMonsterStanceVulnerable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsVulnerable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterStanceVulnerable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterStanceVulnerable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterStanceVulnerable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterStanceVulnerable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

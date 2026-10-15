#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableRoleTrialChangeLineupLeader; }

#define RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D612E50)
#define RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D612E60)
#define RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D612E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableRoleTrialChangeLineupLeader_TypeDefinitionIndex = 23850;

	class EnableRoleTrialChangeLineupLeader : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddEntityToTeamFormation; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDENTITYTOTEAMFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D386AC0)
#define RPG_GAMECORE_ADDENTITYTOTEAMFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D386AD0)
#define RPG_GAMECORE_ADDENTITYTOTEAMFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D386A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddEntityToTeamFormation_TypeDefinitionIndex = 22639;

	class AddEntityToTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTOTEAMFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddEntityToTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddEntityToTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTOTEAMFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddEntityToTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddEntityToTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDENTITYTOTEAMFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

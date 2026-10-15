#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlignTargetToTeamCenter; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DF4C0)
#define RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3DF4D0)
#define RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3DF490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlignTargetToTeamCenter_TypeDefinitionIndex = 22499;

	class AlignTargetToTeamCenter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AlignFaceDir; // 0x20
		::System::Boolean UseNormalFormation; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlignTargetToTeamCenter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlignTargetToTeamCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlignTargetToTeamCenter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlignTargetToTeamCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIGNTARGETTOTEAMCENTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

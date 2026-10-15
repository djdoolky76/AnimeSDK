#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearPropagateBeingAttackInTeam; }

#define RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5890C0)
#define RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5890D0)
#define RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D589090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearPropagateBeingAttackInTeam_TypeDefinitionIndex = 23212;

	class ClearPropagateBeingAttackInTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearPropagateBeingAttackInTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearPropagateBeingAttackInTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearPropagateBeingAttackInTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearPropagateBeingAttackInTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

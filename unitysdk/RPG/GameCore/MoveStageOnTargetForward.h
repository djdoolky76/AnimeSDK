#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MoveStageOnTargetForward; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD6DC0)
#define RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EAD6DD0)
#define RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EAD6D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveStageOnTargetForward_TypeDefinitionIndex = 22869;

	class MoveStageOnTargetForward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single StageRootOffset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveStageOnTargetForward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveStageOnTargetForward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveStageOnTargetForward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveStageOnTargetForward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuteMonsterLastKill; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MUTEMONSTERLASTKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A1EF0)
#define RPG_GAMECORE_MUTEMONSTERLASTKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8A1F00)
#define RPG_GAMECORE_MUTEMONSTERLASTKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A1EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuteMonsterLastKill_TypeDefinitionIndex = 23477;

	class MuteMonsterLastKill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEMONSTERLASTKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuteMonsterLastKill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuteMonsterLastKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEMONSTERLASTKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuteMonsterLastKill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuteMonsterLastKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEMONSTERLASTKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterChangePhase; }
namespace RPG::GameCore { class CharacterPhaseAnimConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERCHANGEPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56ABB0)
#define RPG_GAMECORE_CHARACTERCHANGEPHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56ABC0)
#define RPG_GAMECORE_CHARACTERCHANGEPHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56AB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterChangePhase_TypeDefinitionIndex = 22479;

	class CharacterChangePhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean OnlyAlive; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* PhaseName; // 0x28
		::RPG::GameCore::CharacterPhaseAnimConfig* PhaseAnimConfig; // 0x30
		::System::Boolean RevertToDefault; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEPHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterChangePhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterChangePhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEPHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterChangePhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterChangePhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEPHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

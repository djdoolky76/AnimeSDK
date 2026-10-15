#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ForceMakeCharacterActionable; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E9520)
#define RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E9530)
#define RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E94F0)

namespace RPG::GameCore
{
	class ForceMakeCharacterActionable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ForceActionable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceMakeCharacterActionable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceMakeCharacterActionable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceMakeCharacterActionable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceMakeCharacterActionable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PuzzleAnimatorParam; }
namespace RPG::GameCore { class PuzzleSetAnimatorParams; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PUZZLESETANIMATORPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95E1B0)
#define RPG_GAMECORE_PUZZLESETANIMATORPARAMS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95E1E0)
#define RPG_GAMECORE_PUZZLESETANIMATORPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95E160)

namespace RPG::GameCore
{
	class PuzzleSetAnimatorParams : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::PuzzleAnimatorParam*>* Params; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLESETANIMATORPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PuzzleSetAnimatorParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PuzzleSetAnimatorParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLESETANIMATORPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PuzzleSetAnimatorParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PuzzleSetAnimatorParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLESETANIMATORPARAMS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

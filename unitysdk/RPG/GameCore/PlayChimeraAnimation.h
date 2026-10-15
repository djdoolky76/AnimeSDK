#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace RPG::GameCore { class PlayChimeraAnimation; }

#define RPG_GAMECORE_PLAYCHIMERAANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92CBF0)
#define RPG_GAMECORE_PLAYCHIMERAANIMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92CC00)
#define RPG_GAMECORE_PLAYCHIMERAANIMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92CBA0)

namespace RPG::GameCore
{
	class PlayChimeraAnimation : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleAnimationType Anim; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHIMERAANIMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayChimeraAnimation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayChimeraAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHIMERAANIMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayChimeraAnimation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayChimeraAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHIMERAANIMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

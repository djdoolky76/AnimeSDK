#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayChallengeTargetAnimation; }

#define RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92CAD0)
#define RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92CAE0)
#define RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92CA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayChallengeTargetAnimation_TypeDefinitionIndex = 21617;

	class PlayChallengeTargetAnimation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayChallengeTargetAnimation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayChallengeTargetAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayChallengeTargetAnimation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayChallengeTargetAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHALLENGETARGETANIMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

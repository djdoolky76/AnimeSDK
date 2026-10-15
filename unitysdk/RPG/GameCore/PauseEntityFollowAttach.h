#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PauseEntityFollowAttach; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F2910)
#define RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8F2920)
#define RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F28E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseEntityFollowAttach_TypeDefinitionIndex = 22724;

	class PauseEntityFollowAttach : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsPause; // 0x20
		::System::Boolean ResetPosAndRot; // 0x21
		::System::Boolean PauseFollowVisible; // 0x22
		::System::Boolean CachePauseStateUtilResume; // 0x23
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseEntityFollowAttach* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseEntityFollowAttach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseEntityFollowAttach* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseEntityFollowAttach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

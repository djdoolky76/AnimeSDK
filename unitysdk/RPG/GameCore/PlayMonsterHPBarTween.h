#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayMonsterHPBarTween; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYMONSTERHPBARTWEEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92E100)
#define RPG_GAMECORE_PLAYMONSTERHPBARTWEEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92E110)
#define RPG_GAMECORE_PLAYMONSTERHPBARTWEEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92E0D0)

namespace RPG::GameCore
{
	class PlayMonsterHPBarTween : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* BackgroundColor; // 0x20
		::System::Boolean FollowSimulationSpeed; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMONSTERHPBARTWEEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMonsterHPBarTween* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMonsterHPBarTween*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMONSTERHPBARTWEEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMonsterHPBarTween* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMonsterHPBarTween*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMONSTERHPBARTWEEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

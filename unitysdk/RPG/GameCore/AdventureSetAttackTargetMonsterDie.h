#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureDyingParam; }
namespace RPG::GameCore { class AdventureSetAttackTargetMonsterDie; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CCFF0)
#define RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CD000)
#define RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CCFB0)

namespace RPG::GameCore
{
	class AdventureSetAttackTargetMonsterDie : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsServerSimulateBattle; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::AdventureDyingParam* DyingStyleParam; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

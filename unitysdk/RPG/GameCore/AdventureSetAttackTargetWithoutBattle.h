#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureSetAttackTargetWithoutBattle; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39F730)
#define RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39F740)
#define RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39F700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSetAttackTargetWithoutBattle_TypeDefinitionIndex = 21763;

	class AdventureSetAttackTargetWithoutBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

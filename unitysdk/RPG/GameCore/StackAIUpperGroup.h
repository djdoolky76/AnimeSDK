#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StackAIUpperGroup; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STACKAIUPPERGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD4910)
#define RPG_GAMECORE_STACKAIUPPERGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD4920)
#define RPG_GAMECORE_STACKAIUPPERGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD48D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackAIUpperGroup_TypeDefinitionIndex = 23717;

	class StackAIUpperGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AIUpperGroupPriority; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackAIUpperGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackAIUpperGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackAIUpperGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackAIUpperGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

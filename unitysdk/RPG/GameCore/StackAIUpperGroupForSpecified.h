#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StackAIUpperGroupForSpecified; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD4AC0)
#define RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD4AD0)
#define RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD4A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackAIUpperGroupForSpecified_TypeDefinitionIndex = 23718;

	class StackAIUpperGroupForSpecified : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SpecifiedAIOwner; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* AIUpperGroupPriority; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackAIUpperGroupForSpecified* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackAIUpperGroupForSpecified*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackAIUpperGroupForSpecified* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackAIUpperGroupForSpecified*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKAIUPPERGROUPFORSPECIFIED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

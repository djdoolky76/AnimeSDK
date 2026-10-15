#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIDecisionGroup; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }

#define RPG_GAMECORE_AIDECISIONGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30B9F0)
#define RPG_GAMECORE_AIDECISIONGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D30B900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIDecisionGroup_TypeDefinitionIndex = 15488;

	class AIDecisionGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* DecisionList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIDecisionGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIDecisionGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

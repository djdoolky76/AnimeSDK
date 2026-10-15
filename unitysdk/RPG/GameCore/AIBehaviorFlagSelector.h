#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIBehaviorFlagSelector; }

#define RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D337B20)
#define RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D337B30)
#define RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D337AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIBehaviorFlagSelector_TypeDefinitionIndex = 15598;

	class AIBehaviorFlagSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x10
		::System::Boolean InverseResultFlag; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIBehaviorFlagSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIBehaviorFlagSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIBehaviorFlagSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIBehaviorFlagSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

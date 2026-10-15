#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideSkillReadyState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDESKILLREADYSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BBB90)
#define RPG_GAMECORE_OVERRIDESKILLREADYSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BBBA0)
#define RPG_GAMECORE_OVERRIDESKILLREADYSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BBB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideSkillReadyState_TypeDefinitionIndex = 22838;

	class OverrideSkillReadyState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillName; // 0x20
		::System::String* ReadyState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideSkillReadyState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideSkillReadyState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideSkillReadyState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideSkillReadyState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

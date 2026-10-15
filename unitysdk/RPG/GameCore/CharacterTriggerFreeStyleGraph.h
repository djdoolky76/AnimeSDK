#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterTriggerFreeStyleGraph; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54C840)
#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54C860)
#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54C7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterTriggerFreeStyleGraph_TypeDefinitionIndex = 21239;

	class CharacterTriggerFreeStyleGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetAlias; // 0x18
		::System::Single TransitionDuration; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* GraphName; // 0x28
		::System::Boolean UseWaitPhase; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::MVector2 WaitPhaseTimeRange; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterTriggerFreeStyleGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterTriggerFreeStyleGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterTriggerFreeStyleGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterTriggerFreeStyleGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLEGRAPH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

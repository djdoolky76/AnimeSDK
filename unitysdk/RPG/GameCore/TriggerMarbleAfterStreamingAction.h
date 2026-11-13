#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerMarbleAfterStreamingAction; }

#define RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3318E0)
#define RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E3318F0)
#define RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E331820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMarbleAfterStreamingAction_TypeDefinitionIndex = 21615;

	class TriggerMarbleAfterStreamingAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMarbleAfterStreamingAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMarbleAfterStreamingAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMarbleAfterStreamingAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMarbleAfterStreamingAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

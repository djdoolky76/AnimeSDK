#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class NotifyRougeGoalFinish; }

#define RPG_GAMECORE_NOTIFYROUGEGOALFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F12EFA0)
#define RPG_GAMECORE_NOTIFYROUGEGOALFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F12EFB0)
#define RPG_GAMECORE_NOTIFYROUGEGOALFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F12EF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyRougeGoalFinish_TypeDefinitionIndex = 24117;

	class NotifyRougeGoalFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RogueGoalID; // 0x18
		::System::Boolean Success; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYROUGEGOALFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyRougeGoalFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyRougeGoalFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYROUGEGOALFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyRougeGoalFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyRougeGoalFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYROUGEGOALFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

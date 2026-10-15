#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamActionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TeamAction; }
namespace System { class String; }

#define RPG_GAMECORE_TEAMACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB79270)
#define RPG_GAMECORE_TEAMACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB79280)
#define RPG_GAMECORE_TEAMACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB79230)

namespace RPG::GameCore
{
	class TeamAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ActionName; // 0x18
		::System::Boolean Activated; // 0x20
		::System::Boolean RemoveWhenCasterDead; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::GameCore::TeamActionType Type; // 0x24
		::RPG::GameCore::PredicateConfig* ActorPredicate; // 0x28
		::RPG::GameCore::PredicateConfig* TargetPredicate; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPropEventInBattle; }

#define RPG_GAMECORE_WAITPROPEVENTINBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9EDB0)
#define RPG_GAMECORE_WAITPROPEVENTINBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9EDC0)
#define RPG_GAMECORE_WAITPROPEVENTINBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9ED70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropEventInBattle_TypeDefinitionIndex = 22293;

	class WaitPropEventInBattle : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::JsonEnum* Event; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallBack; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPEVENTINBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropEventInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropEventInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPEVENTINBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropEventInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropEventInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPEVENTINBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

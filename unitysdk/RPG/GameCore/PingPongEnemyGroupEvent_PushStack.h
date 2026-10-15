#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongEnemyGroupEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyGroupEvent_PushStack; }

#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E8A70)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E8A80)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E8CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyGroupEvent_PushStack_TypeDefinitionIndex = 16997;

	class PingPongEnemyGroupEvent_PushStack : public ::RPG::GameCore::PingPongEnemyGroupEventBase
	{
	public:
		::System::UInt32 PushCount; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* StackIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_PushStack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupEvent_PushStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_PushStack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupEvent_PushStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_PUSHSTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitAnimStateChangeV2; }
namespace System { class String; }

#define RPG_GAMECORE_WAITANIMSTATECHANGEV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC66590)
#define RPG_GAMECORE_WAITANIMSTATECHANGEV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC665A0)
#define RPG_GAMECORE_WAITANIMSTATECHANGEV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC66550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAnimStateChangeV2_TypeDefinitionIndex = 22296;

	class WaitAnimStateChangeV2 : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::String* StateName; // 0x20
		::System::Boolean IsEnter; // 0x28
		::System::Boolean IsTransitionIn; // 0x29
		::System::Boolean IsListenAllLayer; // 0x2A
		::System::Byte _padding0[0x5];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAnimStateChangeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAnimStateChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAnimStateChangeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAnimStateChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

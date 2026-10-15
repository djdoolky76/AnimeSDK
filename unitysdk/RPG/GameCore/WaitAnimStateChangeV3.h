#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitAnimStateChangeV3; }
namespace System { class String; }

#define RPG_GAMECORE_WAITANIMSTATECHANGEV3_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC94180)
#define RPG_GAMECORE_WAITANIMSTATECHANGEV3_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC94190)
#define RPG_GAMECORE_WAITANIMSTATECHANGEV3_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC94140)

namespace RPG::GameCore
{
	class WaitAnimStateChangeV3 : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::String* StateName; // 0x20
		::System::Boolean IsEnter; // 0x28
		::System::Boolean IsTransitionIn; // 0x29
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV3_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAnimStateChangeV3* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAnimStateChangeV3*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV3_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAnimStateChangeV3* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAnimStateChangeV3*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGEV3_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

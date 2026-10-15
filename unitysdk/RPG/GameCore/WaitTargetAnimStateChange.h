#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitTargetAnimStateChange; }
namespace System { class String; }

#define RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC75710)
#define RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC75720)
#define RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC756D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTargetAnimStateChange_TypeDefinitionIndex = 22298;

	class WaitTargetAnimStateChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::System::String*>* FromStateNames; // 0x28
		::Il2CppArray<::System::String*>* ToStateNames; // 0x30
		::System::Boolean IsTransitionIn; // 0x38
		::System::Boolean IsListenAllLayer; // 0x39
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTargetAnimStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTargetAnimStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTargetAnimStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTargetAnimStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

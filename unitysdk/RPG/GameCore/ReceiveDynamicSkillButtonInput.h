#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReceiveDynamicSkillButtonInput; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9708E0)
#define RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9708F0)
#define RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9708A0)

namespace RPG::GameCore
{
	class ReceiveDynamicSkillButtonInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* Slots; // 0x18
		::RPG::GameCore::SkillInputType InputType; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReceive; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEmpty; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReceiveDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReceiveDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReceiveDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReceiveDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

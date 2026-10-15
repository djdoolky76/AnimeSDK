#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerTutorial; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERTUTORIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC318A0)
#define RPG_GAMECORE_TRIGGERTUTORIAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC318B0)
#define RPG_GAMECORE_TRIGGERTUTORIAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC31860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerTutorial_TypeDefinitionIndex = 24373;

	class TriggerTutorial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TutorialKey; // 0x18
		::System::Boolean TriggerOnMainPage; // 0x20
		::System::Boolean LockOperation; // 0x21
		::System::Boolean PauseGame; // 0x22
		::System::Boolean PauseSound; // 0x23
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTutorialSucc; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTutorialFail; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTUTORIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerTutorial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTUTORIAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerTutorial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTUTORIAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

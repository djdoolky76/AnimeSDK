#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitTriggerTutorial; }
namespace System { class String; }

#define RPG_GAMECORE_WAITTRIGGERTUTORIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA3C40)
#define RPG_GAMECORE_WAITTRIGGERTUTORIAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA3C50)
#define RPG_GAMECORE_WAITTRIGGERTUTORIAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA3C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTriggerTutorial_TypeDefinitionIndex = 24374;

	class WaitTriggerTutorial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TutorialKey; // 0x18
		::System::Boolean IsLoop; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTrigger; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRIGGERTUTORIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTriggerTutorial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTriggerTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRIGGERTUTORIAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTriggerTutorial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTriggerTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRIGGERTUTORIAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

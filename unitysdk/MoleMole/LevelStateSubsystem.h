#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/MoleMole/LevelStateDefine_ELevelStateName.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_LEVELSTATESUBSYSTEM_GETLEVELSTATE_1_OFFSET UNITYSDK_OFFSET(0x162D2100)
#define MOLEMOLE_LEVELSTATESUBSYSTEM_REGISTERONLEVELSTAGECHANGED_OFFSET UNITYSDK_OFFSET(0x162D2230)
#define MOLEMOLE_LEVELSTATESUBSYSTEM_UNREGISTERONLEVELSTAGECHANGED_OFFSET UNITYSDK_OFFSET(0x162D22E0)
#define MOLEMOLE_LEVELSTATESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x162D2390)

namespace MoleMole
{
	inline static constexpr unsigned int LevelStateSubsystem_TypeDefinitionIndex = 67453;

	class LevelStateSubsystem
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::DPKOIBEFPAO>* LevelStateMap; // 0x10
		::System::Action_2<::System::Object*, ::DPKOIBEFPAO>* _OnLevelStageChanged; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean GetLevelState_1(::MoleMole::LevelStateDefine_ELevelStateName name, ::DPKOIBEFPAO& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::LevelStateDefine_ELevelStateName, ::DPKOIBEFPAO&))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATESUBSYSTEM_GETLEVELSTATE_1_OFFSET))(this, name, value);
		}

		::System::Void RegisterOnLevelStageChanged(::System::Action_2<::System::Object*, ::DPKOIBEFPAO>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::DPKOIBEFPAO>*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATESUBSYSTEM_REGISTERONLEVELSTAGECHANGED_OFFSET))(this, action);
		}

		::System::Void UnRegisterOnLevelStageChanged(::System::Action_2<::System::Object*, ::DPKOIBEFPAO>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::DPKOIBEFPAO>*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATESUBSYSTEM_UNREGISTERONLEVELSTAGECHANGED_OFFSET))(this, action);
		}
	};
}

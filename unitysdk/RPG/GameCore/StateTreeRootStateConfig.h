#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class STTaskConfig; }
namespace RPG::GameCore { class StateTreeRootStateConfig; }
namespace RPG::GameCore { class StateTreeStateBaseConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_STATETREEROOTSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1F4B0)
#define RPG_GAMECORE_STATETREEROOTSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1F2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeRootStateConfig_TypeDefinitionIndex = 15494;

	class StateTreeRootStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::RPG::GameCore::STTaskConfig*>* TaskList; // 0x18
		::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>* TransitionList; // 0x20
		::Il2CppArray<::RPG::GameCore::StateTreeStateBaseConfig*>* SubStateList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREEROOTSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StateTreeRootStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StateTreeRootStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREEROOTSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

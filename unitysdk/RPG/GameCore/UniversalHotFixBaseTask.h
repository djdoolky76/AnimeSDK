#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class UniversalHotFixBaseTask; }
namespace RPG::GameCore { class UniversalHotFixTaskConfig; }

#define RPG_GAMECORE_UNIVERSALHOTFIXBASETASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED34600)
#define RPG_GAMECORE_UNIVERSALHOTFIXBASETASK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED34610)
#define RPG_GAMECORE_UNIVERSALHOTFIXBASETASK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED343E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixBaseTask_TypeDefinitionIndex = 23798;

	class UniversalHotFixBaseTask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::UniversalHotFixTaskConfig* ParamConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SubTaskList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASETASK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixBaseTask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixBaseTask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASETASK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixBaseTask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixBaseTask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASETASK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

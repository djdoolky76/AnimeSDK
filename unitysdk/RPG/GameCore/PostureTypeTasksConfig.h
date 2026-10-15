#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePostureType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PostureTypeTasksConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_POSTURETYPETASKSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93E130)
#define RPG_GAMECORE_POSTURETYPETASKSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93E010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PostureTypeTasksConfig_TypeDefinitionIndex = 17619;

	class PostureTypeTasksConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BattlePostureType PostureType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TasksConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POSTURETYPETASKSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PostureTypeTasksConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PostureTypeTasksConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POSTURETYPETASKSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LevelUpEvolveBuildGear; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F4C20)
#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE6F4C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUpEvolveBuildGearTask_TypeDefinitionIndex = 55138;

	class LevelUpEvolveBuildGearTask
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelUpEvolveBuildGear* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelUpEvolveBuildGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK_ONTASKBEGIN_OFFSET))(this);
		}

	};
}

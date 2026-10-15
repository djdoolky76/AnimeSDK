#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSkillPerformAbilityFinish; }

#define IAPDLAIIKHO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E16E60)
#define IAPDLAIIKHO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E17160)
#define IAPDLAIIKHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E16E90)
#define IAPDLAIIKHO_TICK_OFFSET UNITYSDK_OFFSET(0x15E16FF0)

inline static constexpr unsigned int IAPDLAIIKHO_TypeDefinitionIndex = 55813;

	class IAPDLAIIKHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSkillPerformAbilityFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSkillPerformAbilityFinish*))((::PBYTE)hIl2Cpp + IAPDLAIIKHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPDLAIIKHO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAPDLAIIKHO_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPDLAIIKHO_DISPOSE_OFFSET))(this);
		}

	};

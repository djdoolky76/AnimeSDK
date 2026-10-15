#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvTriggerSkill; }
namespace RPG::GameCore { class TaskContext; }

#define AHDDADIAHOM_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7C3B0)
#define AHDDADIAHOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB7C3E0)

inline static constexpr unsigned int AHDDADIAHOM_TypeDefinitionIndex = 57894;

	class AHDDADIAHOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTriggerSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTriggerSkill*))((::PBYTE)hIl2Cpp + AHDDADIAHOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDDADIAHOM_ONTASKBEGIN_OFFSET))(this);
		}

	};

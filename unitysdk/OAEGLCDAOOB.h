#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeSkillUIDisplay; }
namespace RPG::GameCore { class TaskContext; }

#define OAEGLCDAOOB_CTOR_OFFSET UNITYSDK_OFFSET(0xBD16C30)
#define OAEGLCDAOOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD16C60)

inline static constexpr unsigned int OAEGLCDAOOB_TypeDefinitionIndex = 54930;

	class OAEGLCDAOOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeSkillUIDisplay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeSkillUIDisplay*))((::PBYTE)hIl2Cpp + OAEGLCDAOOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEGLCDAOOB_ONTASKBEGIN_OFFSET))(this);
		}

	};

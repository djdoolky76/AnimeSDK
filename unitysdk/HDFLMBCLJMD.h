#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearDynamicSkillButtonInput; }
namespace RPG::GameCore { class TaskContext; }

#define HDFLMBCLJMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C32C70)
#define HDFLMBCLJMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C32CA0)

inline static constexpr unsigned int HDFLMBCLJMD_TypeDefinitionIndex = 54959;

	class HDFLMBCLJMD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + HDFLMBCLJMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFLMBCLJMD_ONTASKBEGIN_OFFSET))(this);
		}

	};

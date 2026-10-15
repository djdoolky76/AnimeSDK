#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideSkillTargetInfo; }
namespace RPG::GameCore { class TaskContext; }

#define LEDMLKMJFOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB648270)
#define LEDMLKMJFOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6482A0)

inline static constexpr unsigned int LEDMLKMJFOM_TypeDefinitionIndex = 55248;

	class LEDMLKMJFOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideSkillTargetInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideSkillTargetInfo*))((::PBYTE)hIl2Cpp + LEDMLKMJFOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDMLKMJFOM_ONTASKBEGIN_OFFSET))(this);
		}

	};

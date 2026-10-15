#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideSkillReadyState; }
namespace RPG::GameCore { class TaskContext; }

#define BGMHFODAOHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB18B7F0)
#define BGMHFODAOHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB18B820)

inline static constexpr unsigned int BGMHFODAOHJ_TypeDefinitionIndex = 55245;

	class BGMHFODAOHJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideSkillReadyState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideSkillReadyState*))((::PBYTE)hIl2Cpp + BGMHFODAOHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMHFODAOHJ_ONTASKBEGIN_OFFSET))(this);
		}

	};

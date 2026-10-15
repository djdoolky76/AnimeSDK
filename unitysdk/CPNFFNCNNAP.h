#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideSkillDisplayInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CPNFFNCNNAP_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD63A0)
#define CPNFFNCNNAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCD63D0)

inline static constexpr unsigned int CPNFFNCNNAP_TypeDefinitionIndex = 55100;

	class CPNFFNCNNAP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideSkillDisplayInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideSkillDisplayInfo*))((::PBYTE)hIl2Cpp + CPNFFNCNNAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNFFNCNNAP_ONTASKBEGIN_OFFSET))(this);
		}

	};

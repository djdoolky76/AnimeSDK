#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CreateTeamFormationSnapshot; }
namespace RPG::GameCore { class TaskContext; }

#define MBHOEOHDGDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8211F0)
#define MBHOEOHDGDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B821220)

inline static constexpr unsigned int MBHOEOHDGDC_TypeDefinitionIndex = 57568;

	class MBHOEOHDGDC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateTeamFormationSnapshot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateTeamFormationSnapshot*))((::PBYTE)hIl2Cpp + MBHOEOHDGDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBHOEOHDGDC_ONTASKBEGIN_OFFSET))(this);
		}

	};

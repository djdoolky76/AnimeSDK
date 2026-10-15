#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RestoreTeamFormationSnapshot; }
namespace RPG::GameCore { class TaskContext; }

#define GICIKEAENEM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A31470)
#define GICIKEAENEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A314A0)

inline static constexpr unsigned int GICIKEAENEM_TypeDefinitionIndex = 56386;

	class GICIKEAENEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RestoreTeamFormationSnapshot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RestoreTeamFormationSnapshot*))((::PBYTE)hIl2Cpp + GICIKEAENEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICIKEAENEM_ONTASKBEGIN_OFFSET))(this);
		}

	};

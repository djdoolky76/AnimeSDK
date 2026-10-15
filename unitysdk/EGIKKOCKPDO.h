#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RecordEntityFormationIndex; }
namespace RPG::GameCore { class TaskContext; }

#define EGIKKOCKPDO_CTOR_OFFSET UNITYSDK_OFFSET(0x14516D70)
#define EGIKKOCKPDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14516DA0)

inline static constexpr unsigned int EGIKKOCKPDO_TypeDefinitionIndex = 55284;

	class EGIKKOCKPDO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RecordEntityFormationIndex* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RecordEntityFormationIndex*))((::PBYTE)hIl2Cpp + EGIKKOCKPDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIKKOCKPDO_ONTASKBEGIN_OFFSET))(this);
		}

	};

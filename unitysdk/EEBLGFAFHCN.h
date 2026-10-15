#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEntityRelationGroup; }
namespace RPG::GameCore { class TaskContext; }

#define EEBLGFAFHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x13349A60)
#define EEBLGFAFHCN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13349A90)

inline static constexpr unsigned int EEBLGFAFHCN_TypeDefinitionIndex = 55020;

	class EEBLGFAFHCN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityRelationGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityRelationGroup*))((::PBYTE)hIl2Cpp + EEBLGFAFHCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBLGFAFHCN_ONTASKBEGIN_OFFSET))(this);
		}

	};

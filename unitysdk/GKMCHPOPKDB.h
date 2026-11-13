#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTimelineEntityState; }
namespace RPG::GameCore { class TaskContext; }

#define GKMCHPOPKDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DDCA0)
#define GKMCHPOPKDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8DDCD0)

inline static constexpr unsigned int GKMCHPOPKDB_TypeDefinitionIndex = 54558;

	class GKMCHPOPKDB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimelineEntityState*))((::PBYTE)hIl2Cpp + GKMCHPOPKDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMCHPOPKDB_ONTASKBEGIN_OFFSET))(this);
		}

	};

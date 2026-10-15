#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetModelDynamicLoadPriority; }
namespace RPG::GameCore { class TaskContext; }

#define DMNMAKAGOGN_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC7CC0)
#define DMNMAKAGOGN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEC7CF0)

	class DMNMAKAGOGN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetModelDynamicLoadPriority* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetModelDynamicLoadPriority*))((::PBYTE)hIl2Cpp + DMNMAKAGOGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNMAKAGOGN_ONTASKBEGIN_OFFSET))(this);
		}

	};

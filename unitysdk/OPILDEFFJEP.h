#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class NotifyDeadPartSelected; }
namespace RPG::GameCore { class TaskContext; }

#define OPILDEFFJEP_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA6520)
#define OPILDEFFJEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFA6550)

inline static constexpr unsigned int OPILDEFFJEP_TypeDefinitionIndex = 56366;

	class OPILDEFFJEP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyDeadPartSelected* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyDeadPartSelected*))((::PBYTE)hIl2Cpp + OPILDEFFJEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPILDEFFJEP_ONTASKBEGIN_OFFSET))(this);
		}

	};

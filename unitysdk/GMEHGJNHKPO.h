#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSkipDeadHandler; }

#define GMEHGJNHKPO_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACB6F0)
#define GMEHGJNHKPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ACB720)

inline static constexpr unsigned int GMEHGJNHKPO_TypeDefinitionIndex = 56468;

	class GMEHGJNHKPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSkipDeadHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSkipDeadHandler*))((::PBYTE)hIl2Cpp + GMEHGJNHKPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEHGJNHKPO_ONTASKBEGIN_OFFSET))(this);
		}

	};

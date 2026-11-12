#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerUINotifyWithTarget; }

#define PGKIMELFNFP_CTOR_OFFSET UNITYSDK_OFFSET(0xCB0D8B0)
#define PGKIMELFNFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB0D8E0)

inline static constexpr unsigned int PGKIMELFNFP_TypeDefinitionIndex = 57699;

	class PGKIMELFNFP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerUINotifyWithTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerUINotifyWithTarget*))((::PBYTE)hIl2Cpp + PGKIMELFNFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKIMELFNFP_ONTASKBEGIN_OFFSET))(this);
		}

	};

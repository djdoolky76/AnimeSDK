#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetupCustomTaskTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define HIJLJEPOFGB_CTOR_OFFSET UNITYSDK_OFFSET(0x15CDEFC0)
#define HIJLJEPOFGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CDEFF0)

inline static constexpr unsigned int HIJLJEPOFGB_TypeDefinitionIndex = 52507;

	class HIJLJEPOFGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetupCustomTaskTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetupCustomTaskTrigger*))((::PBYTE)hIl2Cpp + HIJLJEPOFGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJLJEPOFGB_ONTASKBEGIN_OFFSET))(this);
		}

	};

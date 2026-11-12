#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTimeRewindEntityDisableControl; }
namespace RPG::GameCore { class TaskContext; }

#define MKOMMIFMGHN_CTOR_OFFSET UNITYSDK_OFFSET(0xC25DE50)
#define MKOMMIFMGHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC25DE80)

inline static constexpr unsigned int MKOMMIFMGHN_TypeDefinitionIndex = 54556;

	class MKOMMIFMGHN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimeRewindEntityDisableControl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimeRewindEntityDisableControl*))((::PBYTE)hIl2Cpp + MKOMMIFMGHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOMMIFMGHN_ONTASKBEGIN_OFFSET))(this);
		}

	};

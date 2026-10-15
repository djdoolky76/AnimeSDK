#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ConsumeActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define MDFKMNDADKD_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A33C0)
#define MDFKMNDADKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8A33F0)

inline static constexpr unsigned int MDFKMNDADKD_TypeDefinitionIndex = 54796;

	class MDFKMNDADKD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeActionCountDown* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeActionCountDown*))((::PBYTE)hIl2Cpp + MDFKMNDADKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFKMNDADKD_ONTASKBEGIN_OFFSET))(this);
		}

	};

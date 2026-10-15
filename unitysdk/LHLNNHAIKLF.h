#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class NotifyVersusBarQuestChange; }
namespace RPG::GameCore { class TaskContext; }

#define LHLNNHAIKLF_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BC600)
#define LHLNNHAIKLF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6BC630)

inline static constexpr unsigned int LHLNNHAIKLF_TypeDefinitionIndex = 55804;

	class LHLNNHAIKLF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyVersusBarQuestChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyVersusBarQuestChange*))((::PBYTE)hIl2Cpp + LHLNNHAIKLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLNNHAIKLF_ONTASKBEGIN_OFFSET))(this);
		}

	};

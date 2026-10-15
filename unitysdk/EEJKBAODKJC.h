#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareTeamLeaderBodySize; }
namespace RPG::GameCore { class TaskContext; }

#define EEJKBAODKJC_CTOR_OFFSET UNITYSDK_OFFSET(0x13A31460)
#define EEJKBAODKJC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13A31490)

inline static constexpr unsigned int EEJKBAODKJC_TypeDefinitionIndex = 53139;

	class EEJKBAODKJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + EEJKBAODKJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJKBAODKJC_EVALUATE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareTeamLeaderPath; }
namespace RPG::GameCore { class TaskContext; }

#define EMGDBAEPBNC_CTOR_OFFSET UNITYSDK_OFFSET(0x15536F00)
#define EMGDBAEPBNC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15536F30)

inline static constexpr unsigned int EMGDBAEPBNC_TypeDefinitionIndex = 52594;

	class EMGDBAEPBNC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTeamLeaderPath* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTeamLeaderPath*))((::PBYTE)hIl2Cpp + EMGDBAEPBNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGDBAEPBNC_EVALUATE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareTurnActionEntityTeamType; }
namespace RPG::GameCore { class TaskContext; }

#define JHCMCJNFCJL_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A3DB0)
#define JHCMCJNFCJL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1A3DE0)

inline static constexpr unsigned int JHCMCJNFCJL_TypeDefinitionIndex = 54584;

	class JHCMCJNFCJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + JHCMCJNFCJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCMCJNFCJL_EVALUATE_OFFSET))(this);
		}

	};

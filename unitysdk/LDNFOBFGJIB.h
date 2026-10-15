#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareTeamFormationWidth; }
namespace RPG::GameCore { class TaskContext; }

#define LDNFOBFGJIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB63E3F0)
#define LDNFOBFGJIB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB63E420)

inline static constexpr unsigned int LDNFOBFGJIB_TypeDefinitionIndex = 54583;

	class LDNFOBFGJIB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + LDNFOBFGJIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFOBFGJIB_EVALUATE_OFFSET))(this);
		}

	};

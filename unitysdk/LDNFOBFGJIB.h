#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareTeamFormationWidth; }
namespace RPG::GameCore { class TaskContext; }

#define LDNFOBFGJIB_CTOR_OFFSET UNITYSDK_OFFSET(0xBED40D0)
#define LDNFOBFGJIB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBED4100)

inline static constexpr unsigned int LDNFOBFGJIB_TypeDefinitionIndex = 55748;

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

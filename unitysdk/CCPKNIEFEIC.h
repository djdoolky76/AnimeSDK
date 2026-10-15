#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindSetResetPlayerAnchor; }

#define CCPKNIEFEIC_CTOR_OFFSET UNITYSDK_OFFSET(0xC754100)
#define CCPKNIEFEIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC754130)

inline static constexpr unsigned int CCPKNIEFEIC_TypeDefinitionIndex = 53404;

	class CCPKNIEFEIC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor*))((::PBYTE)hIl2Cpp + CCPKNIEFEIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPKNIEFEIC_ONTASKBEGIN_OFFSET))(this);
		}

	};

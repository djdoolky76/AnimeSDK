#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindOverrideHitProtectTime; }

#define NCEFHDPDGOP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0A400)
#define NCEFHDPDGOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB0A430)

inline static constexpr unsigned int NCEFHDPDGOP_TypeDefinitionIndex = 53402;

	class NCEFHDPDGOP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindOverrideHitProtectTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindOverrideHitProtectTime*))((::PBYTE)hIl2Cpp + NCEFHDPDGOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEFHDPDGOP_ONTASKBEGIN_OFFSET))(this);
		}

	};

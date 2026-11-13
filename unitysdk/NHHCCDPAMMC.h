#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowRogueSelectMainPageMode; }
namespace RPG::GameCore { class TaskContext; }

#define NHHCCDPAMMC_CTOR_OFFSET UNITYSDK_OFFSET(0x14898BC0)
#define NHHCCDPAMMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14898BF0)

inline static constexpr unsigned int NHHCCDPAMMC_TypeDefinitionIndex = 59953;

	class NHHCCDPAMMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueSelectMainPageMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueSelectMainPageMode*))((::PBYTE)hIl2Cpp + NHHCCDPAMMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHCCDPAMMC_ONTASKBEGIN_OFFSET))(this);
		}

	};

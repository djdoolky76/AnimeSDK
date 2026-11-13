#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetHLODSwitchDelay; }
namespace RPG::GameCore { class TaskContext; }

#define BNDCIIPAEMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A75B740)
#define BNDCIIPAEMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A75B770)

inline static constexpr unsigned int BNDCIIPAEMC_TypeDefinitionIndex = 57099;

	class BNDCIIPAEMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHLODSwitchDelay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHLODSwitchDelay*))((::PBYTE)hIl2Cpp + BNDCIIPAEMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDCIIPAEMC_ONTASKBEGIN_OFFSET))(this);
		}

	};

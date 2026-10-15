#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByTeamFormationRow; }
namespace RPG::GameCore { class TaskContext; }

#define IHELLIBKJMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1641A880)
#define IHELLIBKJMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1641A960)

	class IHELLIBKJMC
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByTeamFormationRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByTeamFormationRow*))((::PBYTE)hIl2Cpp + IHELLIBKJMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHELLIBKJMC_ONTASKBEGIN_OFFSET))(this);
		}

	};

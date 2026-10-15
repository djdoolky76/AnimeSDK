#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RoadRashGameAbility_ReleaseCharging; }
namespace RPG::GameCore { class TaskContext; }

#define GKPJNGPLOKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9DAB0)
#define GKPJNGPLOKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A9DAE0)

inline static constexpr unsigned int GKPJNGPLOKG_TypeDefinitionIndex = 58407;

	class GKPJNGPLOKG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_ReleaseCharging* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_ReleaseCharging*))((::PBYTE)hIl2Cpp + GKPJNGPLOKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPJNGPLOKG_ONTASKBEGIN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RoadRashGameAbility_Ultimate; }
namespace RPG::GameCore { class TaskContext; }

#define PPLGNJCMOPL_CTOR_OFFSET UNITYSDK_OFFSET(0xC385E70)
#define PPLGNJCMOPL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC385EA0)

inline static constexpr unsigned int PPLGNJCMOPL_TypeDefinitionIndex = 58410;

	class PPLGNJCMOPL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_Ultimate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_Ultimate*))((::PBYTE)hIl2Cpp + PPLGNJCMOPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLGNJCMOPL_ONTASKBEGIN_OFFSET))(this);
		}

	};

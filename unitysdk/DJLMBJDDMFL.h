#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RoadRashGameAbility_SlamCast; }
namespace RPG::GameCore { class TaskContext; }

#define DJLMBJDDMFL_CTOR_OFFSET UNITYSDK_OFFSET(0xF23CAF0)
#define DJLMBJDDMFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF23CB20)

	class DJLMBJDDMFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_SlamCast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_SlamCast*))((::PBYTE)hIl2Cpp + DJLMBJDDMFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLMBJDDMFL_ONTASKBEGIN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RoadRashGameAbility_Slam; }
namespace RPG::GameCore { class TaskContext; }

#define NIMNCBNIGIK_CTOR_OFFSET UNITYSDK_OFFSET(0xBBFDCD0)
#define NIMNCBNIGIK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBFDD00)

	class NIMNCBNIGIK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_Slam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_Slam*))((::PBYTE)hIl2Cpp + NIMNCBNIGIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMNCBNIGIK_ONTASKBEGIN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamLookAt; }

#define JGBKFALLLOI_CTOR_OFFSET UNITYSDK_OFFSET(0xB1914A0)
#define JGBKFALLLOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1914D0)

	class JGBKFALLLOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeamLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeamLookAt*))((::PBYTE)hIl2Cpp + JGBKFALLLOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBKFALLLOI_ONTASKBEGIN_OFFSET))(this);
		}

	};

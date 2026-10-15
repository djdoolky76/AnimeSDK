#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetupActionDelayLink; }
namespace RPG::GameCore { class TaskContext; }

#define MBFOOOBHIFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB85A620)
#define MBFOOOBHIFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB85A650)

	class MBFOOOBHIFA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupActionDelayLink* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupActionDelayLink*))((::PBYTE)hIl2Cpp + MBFOOOBHIFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOOOBHIFA_ONTASKBEGIN_OFFSET))(this);
		}

	};

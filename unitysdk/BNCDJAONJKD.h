#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialTaskUnlock; }

#define BNCDJAONJKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC7770)
#define BNCDJAONJKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDC77A0)

	class BNCDJAONJKD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialTaskUnlock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialTaskUnlock*))((::PBYTE)hIl2Cpp + BNCDJAONJKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCDJAONJKD_ONTASKBEGIN_OFFSET))(this);
		}

	};

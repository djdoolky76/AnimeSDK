#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleScoreCounterShow; }

#define NOJPFKPHAHC_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF2A40)
#define NOJPFKPHAHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCF2A70)

	class NOJPFKPHAHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleScoreCounterShow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleScoreCounterShow*))((::PBYTE)hIl2Cpp + NOJPFKPHAHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJPFKPHAHC_ONTASKBEGIN_OFFSET))(this);
		}

	};

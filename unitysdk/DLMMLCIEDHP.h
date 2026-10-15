#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvFireStimulus; }
namespace RPG::GameCore { class TaskContext; }

#define DLMMLCIEDHP_CTOR_OFFSET UNITYSDK_OFFSET(0xF8B2960)
#define DLMMLCIEDHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF8B2990)

	class DLMMLCIEDHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvFireStimulus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvFireStimulus*))((::PBYTE)hIl2Cpp + DLMMLCIEDHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMMLCIEDHP_ONTASKBEGIN_OFFSET))(this);
		}

	};

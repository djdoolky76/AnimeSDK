#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverridePerformanceEndScreenCut; }
namespace RPG::GameCore { class TaskContext; }

#define PGOCDDIJMEF_CTOR_OFFSET UNITYSDK_OFFSET(0xC22B5E0)
#define PGOCDDIJMEF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC22B610)

	class PGOCDDIJMEF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverridePerformanceEndScreenCut* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverridePerformanceEndScreenCut*))((::PBYTE)hIl2Cpp + PGOCDDIJMEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOCDDIJMEF_ONTASKBEGIN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToastPage; }

#define KEJBMDPKBDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB37BAD0)
#define KEJBMDPKBDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB37BB00)

	class KEJBMDPKBDC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToastPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToastPage*))((::PBYTE)hIl2Cpp + KEJBMDPKBDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJBMDPKBDC_ONTASKBEGIN_OFFSET))(this);
		}

	};

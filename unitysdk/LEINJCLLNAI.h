#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpenHipplenGrowthPage; }
namespace RPG::GameCore { class TaskContext; }

#define LEINJCLLNAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB6570C0)
#define LEINJCLLNAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6570F0)

	class LEINJCLLNAI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenHipplenGrowthPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenHipplenGrowthPage*))((::PBYTE)hIl2Cpp + LEINJCLLNAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEINJCLLNAI_ONTASKBEGIN_OFFSET))(this);
		}

	};

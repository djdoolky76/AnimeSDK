#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PerformanceDynamicLoadCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define DNCABKHBDHK_CTOR_OFFSET UNITYSDK_OFFSET(0x11940A60)
#define DNCABKHBDHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11940A90)

	class DNCABKHBDHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceDynamicLoadCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceDynamicLoadCharacter*))((::PBYTE)hIl2Cpp + DNCABKHBDHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCABKHBDHK_ONTASKBEGIN_OFFSET))(this);
		}

	};

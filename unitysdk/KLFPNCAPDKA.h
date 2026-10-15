#pragma once
#include "unitysdk/unitysdk.h"
class NPCJAJABFIB;
namespace RPG::GameCore { class TaskContext; }

#define KLFPNCAPDKA_CTOR_OFFSET UNITYSDK_OFFSET(0xB526360)
#define KLFPNCAPDKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB526390)

	class KLFPNCAPDKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NPCJAJABFIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NPCJAJABFIB*))((::PBYTE)hIl2Cpp + KLFPNCAPDKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFPNCAPDKA_ONTASKBEGIN_OFFSET))(this);
		}

	};

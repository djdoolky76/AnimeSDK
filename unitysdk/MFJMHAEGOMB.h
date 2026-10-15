#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_Hipplen_BubbleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define MFJMHAEGOMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB904100)
#define MFJMHAEGOMB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB904130)
#define MFJMHAEGOMB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9043A0)
#define MFJMHAEGOMB_TICK_OFFSET UNITYSDK_OFFSET(0xB904340)

	class MFJMHAEGOMB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk*))((::PBYTE)hIl2Cpp + MFJMHAEGOMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJMHAEGOMB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFJMHAEGOMB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJMHAEGOMB_ONTASKRESET_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvHideMazeBtn; }
namespace RPG::GameCore { class TaskContext; }

#define KMHMECDOEDG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5573D0)
#define KMHMECDOEDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB557400)

	class KMHMECDOEDG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvHideMazeBtn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvHideMazeBtn*))((::PBYTE)hIl2Cpp + KMHMECDOEDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHMECDOEDG_ONTASKBEGIN_OFFSET))(this);
		}

	};

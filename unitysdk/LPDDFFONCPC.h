#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GravityBallPuzzleStart; }
namespace RPG::GameCore { class TaskContext; }

#define LPDDFFONCPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB81AA50)
#define LPDDFFONCPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB81AA80)

	class LPDDFFONCPC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleStart*))((::PBYTE)hIl2Cpp + LPDDFFONCPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDDFFONCPC_ONTASKBEGIN_OFFSET))(this);
		}

	};

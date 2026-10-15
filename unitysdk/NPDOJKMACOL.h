#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DeployPuzzleBasePointAction; }
namespace RPG::GameCore { class TaskContext; }

#define NPDOJKMACOL_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFB210)
#define NPDOJKMACOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCFB240)

	class NPDOJKMACOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleBasePointAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleBasePointAction*))((::PBYTE)hIl2Cpp + NPDOJKMACOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDOJKMACOL_ONTASKBEGIN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CreateBattleTarget; }
namespace RPG::GameCore { class TaskContext; }

#define FJDPLNHGOOI_CTOR_OFFSET UNITYSDK_OFFSET(0x157C30B0)
#define FJDPLNHGOOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157C30E0)

	class FJDPLNHGOOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleTarget*))((::PBYTE)hIl2Cpp + FJDPLNHGOOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDPLNHGOOI_ONTASKBEGIN_OFFSET))(this);
		}

	};

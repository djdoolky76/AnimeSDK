#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvLogisticsRobotBlockByDoor; }
namespace RPG::GameCore { class TaskContext; }

#define HHJMPHMMOMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD0160)
#define HHJMPHMMOMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CD0190)

	class HHJMPHMMOMP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor*))((::PBYTE)hIl2Cpp + HHJMPHMMOMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJMPHMMOMP_ONTASKBEGIN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvLogisticsRobotReachEnd; }
namespace RPG::GameCore { class TaskContext; }

#define JGNKADPEKPI_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A5000)
#define JGNKADPEKPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1A5030)

	class JGNKADPEKPI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLogisticsRobotReachEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLogisticsRobotReachEnd*))((::PBYTE)hIl2Cpp + JGNKADPEKPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNKADPEKPI_ONTASKBEGIN_OFFSET))(this);
		}

	};

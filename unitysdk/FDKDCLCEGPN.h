#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Main_Wait; }
namespace RPG::GameCore { class TaskContext; }

#define FDKDCLCEGPN_CTOR_OFFSET UNITYSDK_OFFSET(0x156DDCA0)
#define FDKDCLCEGPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156DDCE0)
#define FDKDCLCEGPN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156DDD30)
#define FDKDCLCEGPN_TICK_OFFSET UNITYSDK_OFFSET(0x156DDD80)

	class FDKDCLCEGPN
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x28
		::System::Single PGMIOKKLHIE; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Wait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Wait*))((::PBYTE)hIl2Cpp + FDKDCLCEGPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKDCLCEGPN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKDCLCEGPN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDKDCLCEGPN_TICK_OFFSET))(this, a1);
		}

	};

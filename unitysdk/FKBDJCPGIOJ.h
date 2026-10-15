#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class ShowMatchThreeV2LevelPreparePage; }
namespace RPG::GameCore { class TaskContext; }

#define FKBDJCPGIOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157E5F40)
#define FKBDJCPGIOJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157E5F50)
#define FKBDJCPGIOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157E5F90)
#define FKBDJCPGIOJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157E6180)
#define FKBDJCPGIOJ_TICK_OFFSET UNITYSDK_OFFSET(0x157E61D0)
#define FKBDJCPGIOJ__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x157E6230)

	class FKBDJCPGIOJ : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::ShowMatchThreeV2LevelPreparePage* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ShowMatchThreeV2LevelPreparePage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ShowMatchThreeV2LevelPreparePage*))((::PBYTE)hIl2Cpp + FKBDJCPGIOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBDJCPGIOJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBDJCPGIOJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBDJCPGIOJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKBDJCPGIOJ_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBDJCPGIOJ__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};

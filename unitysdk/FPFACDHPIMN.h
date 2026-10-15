#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GridFightShowGuideTalk; }
namespace RPG::GameCore { class TaskContext; }

#define FPFACDHPIMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15917CD0)
#define FPFACDHPIMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15917EF0)
#define FPFACDHPIMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15917CE0)
#define FPFACDHPIMN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15917F30)
#define FPFACDHPIMN_TICK_OFFSET UNITYSDK_OFFSET(0x15917E90)
#define FPFACDHPIMN__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x15917F80)

	class FPFACDHPIMN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::GridFightShowGuideTalk* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowGuideTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowGuideTalk*))((::PBYTE)hIl2Cpp + FPFACDHPIMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFACDHPIMN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPFACDHPIMN_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFACDHPIMN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFACDHPIMN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFACDHPIMN__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};

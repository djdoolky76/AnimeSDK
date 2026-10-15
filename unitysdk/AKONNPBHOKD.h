#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchHandLayItem; }
namespace RPG::GameCore { class TaskContext; }

#define AKONNPBHOKD_CTOR_OFFSET UNITYSDK_OFFSET(0x12CDF170)
#define AKONNPBHOKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CDF180)
#define AKONNPBHOKD_OFEFKGDFIEN_OFFSET UNITYSDK_OFFSET(0x12CDF8F0)
#define AKONNPBHOKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CDF4A0)
#define AKONNPBHOKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CDF8A0)
#define AKONNPBHOKD_TICK_OFFSET UNITYSDK_OFFSET(0x12CDF1C0)

	class AKONNPBHOKD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::SwitchHandLayItem* IGHAHBNLIJA; // 0x20
		::System::Single CNDFDINMHIK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandLayItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandLayItem*))((::PBYTE)hIl2Cpp + AKONNPBHOKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKONNPBHOKD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKONNPBHOKD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKONNPBHOKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKONNPBHOKD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OFEFKGDFIEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKONNPBHOKD_OFEFKGDFIEN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdvNpcPetSearchFollow; }
namespace RPG::GameCore { class TaskContext; }

#define FODLHPFPEEK_CTOR_OFFSET UNITYSDK_OFFSET(0x158E5380)
#define FODLHPFPEEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158E5390)
#define FODLHPFPEEK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158E5430)
#define FODLHPFPEEK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158E5480)
#define FODLHPFPEEK_TICK_OFFSET UNITYSDK_OFFSET(0x158E53D0)

	class FODLHPFPEEK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvNpcPetSearchFollow* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcPetSearchFollow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcPetSearchFollow*))((::PBYTE)hIl2Cpp + FODLHPFPEEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODLHPFPEEK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FODLHPFPEEK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODLHPFPEEK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODLHPFPEEK_ONTASKRESET_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropClosePuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define KGACEFBFCIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB3CAB80)
#define KGACEFBFCIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3CAD90)
#define KGACEFBFCIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3CAB90)
#define KGACEFBFCIG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3CAD40)
#define KGACEFBFCIG_TICK_OFFSET UNITYSDK_OFFSET(0xB3CADD0)

	class KGACEFBFCIG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::PropClosePuzzle* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropClosePuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropClosePuzzle*))((::PBYTE)hIl2Cpp + KGACEFBFCIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGACEFBFCIG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGACEFBFCIG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGACEFBFCIG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGACEFBFCIG_TICK_OFFSET))(this, a1);
		}

	};

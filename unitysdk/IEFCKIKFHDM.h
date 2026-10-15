#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client::Prop { class RubikCubePuzzleBoard; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::GameCore { class RubikEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define IEFCKIKFHDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF5440)
#define IEFCKIKFHDM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EF54D0)
#define IEFCKIKFHDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EF5940)
#define IEFCKIKFHDM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EF5640)
#define IEFCKIKFHDM_PENKGGKBKFK_OFFSET UNITYSDK_OFFSET(0x15EF5990)
#define IEFCKIKFHDM_TICK_OFFSET UNITYSDK_OFFSET(0x15EF5690)

	class IEFCKIKFHDM : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::Prop::RubikCubePuzzleBoard* MIPPNCGOJNM; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::RubikEventListener* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* JCGFOCCPHEH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RubikEventListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RubikEventListener*))((::PBYTE)hIl2Cpp + IEFCKIKFHDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFCKIKFHDM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFCKIKFHDM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEFCKIKFHDM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFCKIKFHDM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void PENKGGKBKFK(::RPG::Client::Prop::RubikCubePuzzleCube* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + IEFCKIKFHDM_PENKGGKBKFK_OFFSET))(this, a1);
		}

	};

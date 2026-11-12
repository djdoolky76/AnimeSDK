#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client::Prop { class RubikCubePuzzleBoard; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::GameCore { class RubikEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define IEFCKIKFHDM_CTOR_OFFSET UNITYSDK_OFFSET(0x16E60A50)
#define IEFCKIKFHDM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E60AE0)
#define IEFCKIKFHDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E60EF0)
#define IEFCKIKFHDM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E60C50)
#define IEFCKIKFHDM_PENKGGKBKFK_OFFSET UNITYSDK_OFFSET(0x16E60F40)
#define IEFCKIKFHDM_TICK_OFFSET UNITYSDK_OFFSET(0x16E60CA0)

inline static constexpr unsigned int IEFCKIKFHDM_TypeDefinitionIndex = 59767;

	class IEFCKIKFHDM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RubikEventListener* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* JCGFOCCPHEH; // 0x28
		::RPG::Client::Prop::RubikCubePuzzleBoard* MIPPNCGOJNM; // 0x30
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

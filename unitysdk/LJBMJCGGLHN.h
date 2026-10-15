#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwordTrainingEnterGame; }
namespace RPG::GameCore { class TaskContext; }

#define LJBMJCGGLHN_CTOR_OFFSET UNITYSDK_OFFSET(0xB6DA530)
#define LJBMJCGGLHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6DA540)
#define LJBMJCGGLHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6DA580)
#define LJBMJCGGLHN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6DA850)
#define LJBMJCGGLHN_TICK_OFFSET UNITYSDK_OFFSET(0xB6DA8A0)

inline static constexpr unsigned int LJBMJCGGLHN_TypeDefinitionIndex = 58756;

	class LJBMJCGGLHN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwordTrainingEnterGame* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingEnterGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingEnterGame*))((::PBYTE)hIl2Cpp + LJBMJCGGLHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBMJCGGLHN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBMJCGGLHN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBMJCGGLHN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LJBMJCGGLHN_TICK_OFFSET))(this, a1);
		}

	};

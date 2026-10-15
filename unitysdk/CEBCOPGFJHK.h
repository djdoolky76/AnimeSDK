#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StartChimeraWorkRound; }
namespace RPG::GameCore { class TaskContext; }

#define CEBCOPGFJHK_CTOR_OFFSET UNITYSDK_OFFSET(0xC77B600)
#define CEBCOPGFJHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC77B610)
#define CEBCOPGFJHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC77B650)
#define CEBCOPGFJHK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC77B700)
#define CEBCOPGFJHK_TICK_OFFSET UNITYSDK_OFFSET(0xC77B740)

	class CEBCOPGFJHK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StartChimeraWorkRound* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartChimeraWorkRound* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartChimeraWorkRound*))((::PBYTE)hIl2Cpp + CEBCOPGFJHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBCOPGFJHK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBCOPGFJHK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBCOPGFJHK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEBCOPGFJHK_TICK_OFFSET))(this, a1);
		}

	};

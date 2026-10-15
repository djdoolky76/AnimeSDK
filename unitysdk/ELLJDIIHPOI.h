#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonsterResearchSubmit; }
namespace RPG::GameCore { class TaskContext; }

#define ELLJDIIHPOI_CTOR_OFFSET UNITYSDK_OFFSET(0x15526A50)
#define ELLJDIIHPOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15526B60)
#define ELLJDIIHPOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15526A60)
#define ELLJDIIHPOI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15526AB0)
#define ELLJDIIHPOI_TICK_OFFSET UNITYSDK_OFFSET(0x15526B00)

	class ELLJDIIHPOI : public ::GELIALJDFBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterResearchSubmit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterResearchSubmit*))((::PBYTE)hIl2Cpp + ELLJDIIHPOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLJDIIHPOI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLJDIIHPOI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELLJDIIHPOI_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLJDIIHPOI_DISPOSE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GoNextTargetInList; }
namespace RPG::GameCore { class TaskContext; }

#define FIKFNBIBOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x166CCE90)
#define FIKFNBIBOGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166CCEA0)
#define FIKFNBIBOGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166CCEE0)
#define FIKFNBIBOGJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x166CD1F0)
#define FIKFNBIBOGJ_TICK_OFFSET UNITYSDK_OFFSET(0x166CD240)

inline static constexpr unsigned int FIKFNBIBOGJ_TypeDefinitionIndex = 56263;

	class FIKFNBIBOGJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GoNextTargetInList* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GoNextTargetInList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GoNextTargetInList*))((::PBYTE)hIl2Cpp + FIKFNBIBOGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKFNBIBOGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKFNBIBOGJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKFNBIBOGJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIKFNBIBOGJ_TICK_OFFSET))(this, a1);
		}

	};

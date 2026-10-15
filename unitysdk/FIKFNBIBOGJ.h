#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GoNextTargetInList; }
namespace RPG::GameCore { class TaskContext; }

#define FIKFNBIBOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157AB400)
#define FIKFNBIBOGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157AB410)
#define FIKFNBIBOGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157AB450)
#define FIKFNBIBOGJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157AB760)
#define FIKFNBIBOGJ_TICK_OFFSET UNITYSDK_OFFSET(0x157AB7B0)

inline static constexpr unsigned int FIKFNBIBOGJ_TypeDefinitionIndex = 55086;

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

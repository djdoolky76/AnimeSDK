#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class AKGKDDMPGPA;
namespace RPG::GameCore { class AdvChaseBailu; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define FFEEJDHEDIK_CTOR_OFFSET UNITYSDK_OFFSET(0x15733250)
#define FFEEJDHEDIK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15733260)
#define FFEEJDHEDIK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15733310)
#define FFEEJDHEDIK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157332D0)
#define FFEEJDHEDIK_TICK_OFFSET UNITYSDK_OFFSET(0x15733760)

	class FFEEJDHEDIK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvChaseBailu* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::GameEntity* ILAJEHHAPBD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::AKGKDDMPGPA* KCAPNKMBOBO; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvChaseBailu* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvChaseBailu*))((::PBYTE)hIl2Cpp + FFEEJDHEDIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEEJDHEDIK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEEJDHEDIK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEEJDHEDIK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFEEJDHEDIK_TICK_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ConvinceMoveTurn; }
namespace RPG::GameCore { class TaskContext; }

#define KHKMENLOBOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB40BB10)
#define KHKMENLOBOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB40BB40)
#define KHKMENLOBOB_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xB40BD10)

	class KHKMENLOBOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceMoveTurn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceMoveTurn*))((::PBYTE)hIl2Cpp + KHKMENLOBOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMENLOBOB_ONTASKBEGIN_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + KHKMENLOBOB_SETNEXTTASK_OFFSET))(this, a1);
		}

	};

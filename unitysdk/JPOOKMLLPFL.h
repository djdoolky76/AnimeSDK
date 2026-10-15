#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ConvinceMoveCurrTurnOption; }
namespace RPG::GameCore { class TaskContext; }

#define JPOOKMLLPFL_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CEF60)
#define JPOOKMLLPFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2CEF90)
#define JPOOKMLLPFL_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xB2CF180)

	class JPOOKMLLPFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceMoveCurrTurnOption* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceMoveCurrTurnOption*))((::PBYTE)hIl2Cpp + JPOOKMLLPFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOOKMLLPFL_ONTASKBEGIN_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + JPOOKMLLPFL_SETNEXTTASK_OFFSET))(this, a1);
		}

	};

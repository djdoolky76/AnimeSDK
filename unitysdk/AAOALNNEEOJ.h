#pragma once
#include "unitysdk/unitysdk.h"
class ELDPEBJEFNC;
namespace RPG::GameCore { class TaskContext; }

#define AAOALNNEEOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D7880)
#define AAOALNNEEOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0D78B0)

	class AAOALNNEEOJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ELDPEBJEFNC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ELDPEBJEFNC*))((::PBYTE)hIl2Cpp + AAOALNNEEOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOALNNEEOJ_ONTASKBEGIN_OFFSET))(this);
		}

	};

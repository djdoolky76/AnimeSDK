#pragma once
#include "unitysdk/unitysdk.h"
class PCAPHLBJNIA;
namespace RPG::GameCore { class TaskContext; }

#define JIFMKEBONHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB1EF9D0)
#define JIFMKEBONHB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1EFA00)

	class JIFMKEBONHB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PCAPHLBJNIA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PCAPHLBJNIA*))((::PBYTE)hIl2Cpp + JIFMKEBONHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIFMKEBONHB_EVALUATE_OFFSET))(this);
		}

	};

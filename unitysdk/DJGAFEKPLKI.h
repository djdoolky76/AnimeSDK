#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODKMIIMEEPG.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitConditionString; }

#define DJGAFEKPLKI_CTOR_OFFSET UNITYSDK_OFFSET(0xF234790)

	class DJGAFEKPLKI : public ::ODKMIIMEEPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitConditionString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitConditionString*))((::PBYTE)hIl2Cpp + DJGAFEKPLKI_CTOR_OFFSET))(this, a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAIJNANMMHK.h"
namespace RPG::GameCore { class SetDynamicValueClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define AENODHBJCLA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF03B10)

	class AENODHBJCLA : public ::GAIJNANMMHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueClientOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueClientOnly*))((::PBYTE)hIl2Cpp + AENODHBJCLA_CTOR_OFFSET))(this, a1, a2);
		}

	};

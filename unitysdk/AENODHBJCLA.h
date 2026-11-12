#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAIJNANMMHK.h"
namespace RPG::GameCore { class SetDynamicValueClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define AENODHBJCLA_CTOR_OFFSET UNITYSDK_OFFSET(0xD5B5350)

inline static constexpr unsigned int AENODHBJCLA_TypeDefinitionIndex = 56673;

	class AENODHBJCLA : public ::GAIJNANMMHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueClientOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueClientOnly*))((::PBYTE)hIl2Cpp + AENODHBJCLA_CTOR_OFFSET))(this, a1, a2);
		}

	};

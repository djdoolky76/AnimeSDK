#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBDBJGIIIAK.h"
namespace RPG::GameCore { class ByIsBodyPartClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define LMDJEIEEMOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB774350)

inline static constexpr unsigned int LMDJEIEEMOE_TypeDefinitionIndex = 54639;

	class LMDJEIEEMOE : public ::LBDBJGIIIAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + LMDJEIEEMOE_CTOR_OFFSET))(this, a1, a2);
		}

	};

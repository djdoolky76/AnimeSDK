#pragma once
#include "unitysdk/unitysdk.h"
class GFKIPGPPFOB;
namespace RPG::GameCore { class TaskContext; }

#define EDGJCKGKMNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1330F580)
#define EDGJCKGKMNA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1330F5B0)

inline static constexpr unsigned int EDGJCKGKMNA_TypeDefinitionIndex = 52604;

	class EDGJCKGKMNA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GFKIPGPPFOB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GFKIPGPPFOB*))((::PBYTE)hIl2Cpp + EDGJCKGKMNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGJCKGKMNA_EVALUATE_OFFSET))(this);
		}

	};

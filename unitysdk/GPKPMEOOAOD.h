#pragma once
#include "unitysdk/unitysdk.h"
class JCDELEMIIME;
namespace RPG::GameCore { class TaskContext; }

#define GPKPMEOOAOD_CTOR_OFFSET UNITYSDK_OFFSET(0x15B5D5A0)
#define GPKPMEOOAOD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B5D5D0)

inline static constexpr unsigned int GPKPMEOOAOD_TypeDefinitionIndex = 52780;

	class GPKPMEOOAOD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JCDELEMIIME* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JCDELEMIIME*))((::PBYTE)hIl2Cpp + GPKPMEOOAOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKPMEOOAOD_EVALUATE_OFFSET))(this);
		}

	};

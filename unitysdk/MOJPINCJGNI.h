#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNOPKLPLACJ.h"
namespace RPG::GameCore { class SetDynamicValueByProperty; }
namespace RPG::GameCore { class TaskContext; }

#define MOJPINCJGNI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2D1B0)

inline static constexpr unsigned int MOJPINCJGNI_TypeDefinitionIndex = 55460;

	class MOJPINCJGNI : public ::DNOPKLPLACJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + MOJPINCJGNI_CTOR_OFFSET))(this, a1, a2);
		}

	};

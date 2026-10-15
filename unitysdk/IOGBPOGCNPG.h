#pragma once
#include "unitysdk/unitysdk.h"
class NPHIKPFNJJO;
namespace RPG::GameCore { class TaskContext; }

#define IOGBPOGCNPG_CTOR_OFFSET UNITYSDK_OFFSET(0x16502750)
#define IOGBPOGCNPG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16502780)

inline static constexpr unsigned int IOGBPOGCNPG_TypeDefinitionIndex = 53017;

	class IOGBPOGCNPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NPHIKPFNJJO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NPHIKPFNJJO*))((::PBYTE)hIl2Cpp + IOGBPOGCNPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGBPOGCNPG_EVALUATE_OFFSET))(this);
		}

	};

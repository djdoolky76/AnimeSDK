#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByRandomChanceClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define NEOPAHAGBBM_CTOR_OFFSET UNITYSDK_OFFSET(0xBB6EFC0)
#define NEOPAHAGBBM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB6EFF0)

inline static constexpr unsigned int NEOPAHAGBBM_TypeDefinitionIndex = 54710;

	class NEOPAHAGBBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + NEOPAHAGBBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOPAHAGBBM_EVALUATE_OFFSET))(this);
		}

	};

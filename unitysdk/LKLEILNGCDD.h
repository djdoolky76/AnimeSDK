#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ByCheckMonsterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define LKLEILNGCDD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF2DC0)
#define LKLEILNGCDD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFF2EA0)
#define LKLEILNGCDD_FEJKOHFHHNN_OFFSET UNITYSDK_OFFSET(0xBFF3060)

inline static constexpr unsigned int LKLEILNGCDD_TypeDefinitionIndex = 59208;

	class LKLEILNGCDD
	{
	public:
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + LKLEILNGCDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEILNGCDD_EVALUATE_OFFSET))(this);
		}

		::System::Void FEJKOHFHHNN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LKLEILNGCDD_FEJKOHFHHNN_OFFSET))(this, a1);
		}

	};

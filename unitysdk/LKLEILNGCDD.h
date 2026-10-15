#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ByCheckMonsterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define LKLEILNGCDD_CTOR_OFFSET UNITYSDK_OFFSET(0xB753D60)
#define LKLEILNGCDD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB753E40)
#define LKLEILNGCDD_FEJKOHFHHNN_OFFSET UNITYSDK_OFFSET(0xB754010)

inline static constexpr unsigned int LKLEILNGCDD_TypeDefinitionIndex = 57970;

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

#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ByCheckCharacterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define DPCENMOOIGE_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF9830)
#define DPCENMOOIGE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11FF9910)
#define DPCENMOOIGE_FEJKOHFHHNN_OFFSET UNITYSDK_OFFSET(0x11FF9B10)

inline static constexpr unsigned int DPCENMOOIGE_TypeDefinitionIndex = 57967;

	class DPCENMOOIGE
	{
	public:
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + DPCENMOOIGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCENMOOIGE_EVALUATE_OFFSET))(this);
		}

		::System::Void FEJKOHFHHNN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DPCENMOOIGE_FEJKOHFHHNN_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByInfiniteMonsterWaveLeft; }
namespace RPG::GameCore { class TaskContext; }

#define INEOLMDOFMB_CTOR_OFFSET UNITYSDK_OFFSET(0x164DB460)
#define INEOLMDOFMB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164DB490)

inline static constexpr unsigned int INEOLMDOFMB_TypeDefinitionIndex = 55113;

	class INEOLMDOFMB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + INEOLMDOFMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INEOLMDOFMB_EVALUATE_OFFSET))(this);
		}

	};

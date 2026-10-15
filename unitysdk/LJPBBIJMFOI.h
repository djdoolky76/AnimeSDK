#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHaveAbilityTarget; }
namespace RPG::GameCore { class TaskContext; }

#define LJPBBIJMFOI_CTOR_OFFSET UNITYSDK_OFFSET(0xB724430)
#define LJPBBIJMFOI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB724460)

inline static constexpr unsigned int LJPBBIJMFOI_TypeDefinitionIndex = 54625;

	class LJPBBIJMFOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + LJPBBIJMFOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPBBIJMFOI_EVALUATE_OFFSET))(this);
		}

	};

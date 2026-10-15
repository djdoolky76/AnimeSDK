#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareResistChance; }
namespace RPG::GameCore { class TaskContext; }

#define FJMPPMKMBLP_CTOR_OFFSET UNITYSDK_OFFSET(0x157CED10)
#define FJMPPMKMBLP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157CED40)

inline static constexpr unsigned int FJMPPMKMBLP_TypeDefinitionIndex = 54560;

	class FJMPPMKMBLP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareResistChance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + FJMPPMKMBLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMPPMKMBLP_EVALUATE_OFFSET))(this);
		}

	};

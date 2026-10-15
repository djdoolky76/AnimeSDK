#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareModifierValue; }
namespace RPG::GameCore { class TaskContext; }

#define NHCIKNHHHOO_CTOR_OFFSET UNITYSDK_OFFSET(0xBBBE0F0)
#define NHCIKNHHHOO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBBBE120)

inline static constexpr unsigned int NHCIKNHHHOO_TypeDefinitionIndex = 54543;

	class NHCIKNHHHOO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareModifierValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareModifierValue*))((::PBYTE)hIl2Cpp + NHCIKNHHHOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCIKNHHHOO_EVALUATE_OFFSET))(this);
		}

	};

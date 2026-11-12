#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsSplitDamage; }
namespace RPG::GameCore { class TaskContext; }

#define ENFCFMOFDHA_CTOR_OFFSET UNITYSDK_OFFSET(0x164BAF00)
#define ENFCFMOFDHA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164BAF30)

inline static constexpr unsigned int ENFCFMOFDHA_TypeDefinitionIndex = 55850;

	class ENFCFMOFDHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + ENFCFMOFDHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFCFMOFDHA_EVALUATE_OFFSET))(this);
		}

	};

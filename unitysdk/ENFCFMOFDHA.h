#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsSplitDamage; }
namespace RPG::GameCore { class TaskContext; }

#define ENFCFMOFDHA_CTOR_OFFSET UNITYSDK_OFFSET(0x155AA6F0)
#define ENFCFMOFDHA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155AA720)

inline static constexpr unsigned int ENFCFMOFDHA_TypeDefinitionIndex = 54684;

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

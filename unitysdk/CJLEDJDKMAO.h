#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareItemNum; }
namespace RPG::GameCore { class TaskContext; }

#define CJLEDJDKMAO_CTOR_OFFSET UNITYSDK_OFFSET(0xD4CF900)
#define CJLEDJDKMAO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD4CF930)

inline static constexpr unsigned int CJLEDJDKMAO_TypeDefinitionIndex = 52576;

	class CJLEDJDKMAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + CJLEDJDKMAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEDJDKMAO_EVALUATE_OFFSET))(this);
		}

	};

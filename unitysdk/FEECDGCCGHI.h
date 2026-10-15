#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareTextJoinValue; }
namespace RPG::GameCore { class TaskContext; }

#define FEECDGCCGHI_CTOR_OFFSET UNITYSDK_OFFSET(0x156DBDE0)
#define FEECDGCCGHI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156DBE10)

inline static constexpr unsigned int FEECDGCCGHI_TypeDefinitionIndex = 52595;

	class FEECDGCCGHI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + FEECDGCCGHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEECDGCCGHI_EVALUATE_OFFSET))(this);
		}

	};

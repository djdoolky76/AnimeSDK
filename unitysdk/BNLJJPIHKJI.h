#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFirstPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define BNLJJPIHKJI_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDA930)
#define BNLJJPIHKJI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDDA960)

inline static constexpr unsigned int BNLJJPIHKJI_TypeDefinitionIndex = 52557;

	class BNLJJPIHKJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFirstPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFirstPerformance*))((::PBYTE)hIl2Cpp + BNLJJPIHKJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLJJPIHKJI_EVALUATE_OFFSET))(this);
		}

	};

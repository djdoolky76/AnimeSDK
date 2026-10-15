#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePropType; }
namespace RPG::GameCore { class TaskContext; }

#define ONFDGCCECGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4A060)
#define ONFDGCCECGA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF4A090)

inline static constexpr unsigned int ONFDGCCECGA_TypeDefinitionIndex = 52589;

	class ONFDGCCECGA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + ONFDGCCECGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFDGCCECGA_EVALUATE_OFFSET))(this);
		}

	};

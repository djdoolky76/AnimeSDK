#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByInCustomZone; }
namespace RPG::GameCore { class TaskContext; }

#define NCBNDEHPIML_CTOR_OFFSET UNITYSDK_OFFSET(0xBAF16E0)
#define NCBNDEHPIML_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBAF1710)

inline static constexpr unsigned int NCBNDEHPIML_TypeDefinitionIndex = 53116;

	class NCBNDEHPIML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByInCustomZone* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByInCustomZone*))((::PBYTE)hIl2Cpp + NCBNDEHPIML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBNDEHPIML_EVALUATE_OFFSET))(this);
		}

	};

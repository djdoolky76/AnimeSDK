#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCurrentModifierStatusType; }
namespace RPG::GameCore { class TaskContext; }

#define KOHMLKPNPGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE9CE0)
#define KOHMLKPNPGA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDE9D10)

inline static constexpr unsigned int KOHMLKPNPGA_TypeDefinitionIndex = 55692;

	class KOHMLKPNPGA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + KOHMLKPNPGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHMLKPNPGA_EVALUATE_OFFSET))(this);
		}

	};

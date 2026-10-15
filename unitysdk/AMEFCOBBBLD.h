#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByFastDeliverFinish; }
namespace RPG::GameCore { class TaskContext; }

#define AMEFCOBBBLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1557BEB0)
#define AMEFCOBBBLD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1557BEE0)

inline static constexpr unsigned int AMEFCOBBBLD_TypeDefinitionIndex = 53113;

	class AMEFCOBBBLD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + AMEFCOBBBLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEFCOBBBLD_EVALUATE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSummonUnitCount; }
namespace RPG::GameCore { class TaskContext; }

#define FKFOKIMEFDP_CTOR_OFFSET UNITYSDK_OFFSET(0x157E4750)
#define FKFOKIMEFDP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157E4780)

inline static constexpr unsigned int FKFOKIMEFDP_TypeDefinitionIndex = 54577;

	class FKFOKIMEFDP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + FKFOKIMEFDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFOKIMEFDP_EVALUATE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareStanceRatio; }
namespace RPG::GameCore { class TaskContext; }

#define MPBFIFGBNGD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA38DC0)
#define MPBFIFGBNGD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA38DF0)

inline static constexpr unsigned int MPBFIFGBNGD_TypeDefinitionIndex = 54576;

	class MPBFIFGBNGD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + MPBFIFGBNGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBFIFGBNGD_EVALUATE_OFFSET))(this);
		}

	};

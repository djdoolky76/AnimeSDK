#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByViewModeSwitchEmptyServant; }
namespace RPG::GameCore { class TaskContext; }

#define OOBGHJGCHKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF5BD90)
#define OOBGHJGCHKO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF5BDC0)

inline static constexpr unsigned int OOBGHJGCHKO_TypeDefinitionIndex = 53169;

	class OOBGHJGCHKO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + OOBGHJGCHKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBGHJGCHKO_EVALUATE_OFFSET))(this);
		}

	};

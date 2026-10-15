#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RA_ByAlertLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLDNCFJIHGB_CTOR_OFFSET UNITYSDK_OFFSET(0xD774460)
#define CLDNCFJIHGB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD774490)

inline static constexpr unsigned int CLDNCFJIHGB_TypeDefinitionIndex = 52092;

	class CLDNCFJIHGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + CLDNCFJIHGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDNCFJIHGB_EVALUATE_OFFSET))(this);
		}

	};

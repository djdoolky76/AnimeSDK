#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasSummonRelation; }
namespace RPG::GameCore { class TaskContext; }

#define AMJDHHAIIBD_CTOR_OFFSET UNITYSDK_OFFSET(0x15576A20)
#define AMJDHHAIIBD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15576A50)

inline static constexpr unsigned int AMJDHHAIIBD_TypeDefinitionIndex = 54623;

	class AMJDHHAIIBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasSummonRelation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasSummonRelation*))((::PBYTE)hIl2Cpp + AMJDHHAIIBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJDHHAIIBD_EVALUATE_OFFSET))(this);
		}

	};

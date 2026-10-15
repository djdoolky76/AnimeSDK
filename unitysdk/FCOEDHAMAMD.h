#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIfGroupIsOccupied; }
namespace RPG::GameCore { class TaskContext; }

#define FCOEDHAMAMD_CTOR_OFFSET UNITYSDK_OFFSET(0x156CFB10)
#define FCOEDHAMAMD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156CFB40)

inline static constexpr unsigned int FCOEDHAMAMD_TypeDefinitionIndex = 52599;

	class FCOEDHAMAMD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + FCOEDHAMAMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOEDHAMAMD_EVALUATE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareItemNumber; }
namespace RPG::GameCore { class TaskContext; }

#define ADFEEMPBBOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB134980)
#define ADFEEMPBBOJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1349B0)

inline static constexpr unsigned int ADFEEMPBBOJ_TypeDefinitionIndex = 52085;

	class ADFEEMPBBOJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + ADFEEMPBBOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEEMPBBOJ_EVALUATE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareParamValue; }
namespace RPG::GameCore { class TaskContext; }

#define CGIELMEPJJL_CTOR_OFFSET UNITYSDK_OFFSET(0xCC845E0)
#define CGIELMEPJJL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCC84610)

inline static constexpr unsigned int CGIELMEPJJL_TypeDefinitionIndex = 54555;

	class CGIELMEPJJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + CGIELMEPJJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIELMEPJJL_EVALUATE_OFFSET))(this);
		}

	};

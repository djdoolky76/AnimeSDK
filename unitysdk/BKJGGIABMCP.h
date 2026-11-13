#pragma once
#include "unitysdk/unitysdk.h"
class JFBLKOIBDEE;
namespace RPG::GameCore { class TaskContext; }

#define BKJGGIABMCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6670E0)
#define BKJGGIABMCP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A667110)

inline static constexpr unsigned int BKJGGIABMCP_TypeDefinitionIndex = 54497;

	class BKJGGIABMCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JFBLKOIBDEE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JFBLKOIBDEE*))((::PBYTE)hIl2Cpp + BKJGGIABMCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJGGIABMCP_EVALUATE_OFFSET))(this);
		}

	};

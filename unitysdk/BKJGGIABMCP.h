#pragma once
#include "unitysdk/unitysdk.h"
class JFBLKOIBDEE;
namespace RPG::GameCore { class TaskContext; }

#define BKJGGIABMCP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA561D0)
#define BKJGGIABMCP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA56200)

inline static constexpr unsigned int BKJGGIABMCP_TypeDefinitionIndex = 53335;

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

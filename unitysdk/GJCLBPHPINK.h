#pragma once
#include "unitysdk/unitysdk.h"
class CFBFPOLPBIE;
namespace RPG::GameCore { class TaskContext; }

#define GJCLBPHPINK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A5CEC0)
#define GJCLBPHPINK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A5CEF0)

inline static constexpr unsigned int GJCLBPHPINK_TypeDefinitionIndex = 55032;

	class GJCLBPHPINK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CFBFPOLPBIE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CFBFPOLPBIE*))((::PBYTE)hIl2Cpp + GJCLBPHPINK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCLBPHPINK_EVALUATE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMatchThreeBirdLocation; }
namespace RPG::GameCore { class TaskContext; }

#define JMPEMBBBBJL_CTOR_OFFSET UNITYSDK_OFFSET(0xB26DC70)
#define JMPEMBBBBJL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB26DCA0)

inline static constexpr unsigned int JMPEMBBBBJL_TypeDefinitionIndex = 53011;

	class JMPEMBBBBJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + JMPEMBBBBJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPEMBBBBJL_EVALUATE_OFFSET))(this);
		}

	};

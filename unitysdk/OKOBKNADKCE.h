#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByContainCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define OKOBKNADKCE_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF1820)
#define OKOBKNADKCE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBEF1850)

inline static constexpr unsigned int OKOBKNADKCE_TypeDefinitionIndex = 54591;

	class OKOBKNADKCE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainCustomString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + OKOBKNADKCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOBKNADKCE_EVALUATE_OFFSET))(this);
		}

	};

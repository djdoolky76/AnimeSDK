#pragma once
#include "unitysdk/unitysdk.h"
class GLFJJMLOPMO;
namespace RPG::GameCore { class TaskContext; }

#define JEPFPCAJEKB_CTOR_OFFSET UNITYSDK_OFFSET(0x13087590)
#define JEPFPCAJEKB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x130875C0)

inline static constexpr unsigned int JEPFPCAJEKB_TypeDefinitionIndex = 55048;

	class JEPFPCAJEKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GLFJJMLOPMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GLFJJMLOPMO*))((::PBYTE)hIl2Cpp + JEPFPCAJEKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEPFPCAJEKB_EVALUATE_OFFSET))(this);
		}

	};

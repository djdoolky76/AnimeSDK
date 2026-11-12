#pragma once
#include "unitysdk/unitysdk.h"
class JEBDGFNFEND;
namespace RPG::GameCore { class TaskContext; }

#define LLEAENFOJME_CTOR_OFFSET UNITYSDK_OFFSET(0xC003EE0)
#define LLEAENFOJME_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC003F10)

inline static constexpr unsigned int LLEAENFOJME_TypeDefinitionIndex = 55006;

	class LLEAENFOJME
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JEBDGFNFEND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JEBDGFNFEND*))((::PBYTE)hIl2Cpp + LLEAENFOJME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEAENFOJME_EVALUATE_OFFSET))(this);
		}

	};

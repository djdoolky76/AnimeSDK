#pragma once
#include "unitysdk/unitysdk.h"
class DOHCNAGPAEM;
namespace RPG::GameCore { class TaskContext; }

#define ACGOLOOKINA_CTOR_OFFSET UNITYSDK_OFFSET(0x1828F230)
#define ACGOLOOKINA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1828F260)

inline static constexpr unsigned int ACGOLOOKINA_TypeDefinitionIndex = 53715;

	class ACGOLOOKINA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DOHCNAGPAEM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DOHCNAGPAEM*))((::PBYTE)hIl2Cpp + ACGOLOOKINA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGOLOOKINA_EVALUATE_OFFSET))(this);
		}

	};

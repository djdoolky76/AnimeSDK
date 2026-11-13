#pragma once
#include "unitysdk/unitysdk.h"
class DCGNLKPJHKF;
namespace RPG::GameCore { class TaskContext; }

#define MOOJAIBLBBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B21E3E0)
#define MOOJAIBLBBK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B21E410)

inline static constexpr unsigned int MOOJAIBLBBK_TypeDefinitionIndex = 55870;

	class MOOJAIBLBBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DCGNLKPJHKF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DCGNLKPJHKF*))((::PBYTE)hIl2Cpp + MOOJAIBLBBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOJAIBLBBK_EVALUATE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
class DFFLGKHHLLH;
namespace RPG::GameCore { class TaskContext; }

#define PEOIIAOBKML_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F7000)
#define PEOIIAOBKML_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC1F7030)

inline static constexpr unsigned int PEOIIAOBKML_TypeDefinitionIndex = 54161;

	class PEOIIAOBKML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DFFLGKHHLLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DFFLGKHHLLH*))((::PBYTE)hIl2Cpp + PEOIIAOBKML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOIIAOBKML_EVALUATE_OFFSET))(this);
		}

	};

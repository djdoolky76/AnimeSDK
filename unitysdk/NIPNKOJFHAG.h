#pragma once
#include "unitysdk/unitysdk.h"
class ELLIFHOBAEJ;
namespace RPG::GameCore { class TaskContext; }

#define NIPNKOJFHAG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC00D80)
#define NIPNKOJFHAG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC00DB0)

inline static constexpr unsigned int NIPNKOJFHAG_TypeDefinitionIndex = 53885;

	class NIPNKOJFHAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ELLIFHOBAEJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ELLIFHOBAEJ*))((::PBYTE)hIl2Cpp + NIPNKOJFHAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPNKOJFHAG_EVALUATE_OFFSET))(this);
		}

	};

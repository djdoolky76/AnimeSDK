#pragma once
#include "unitysdk/unitysdk.h"
class NKGIHJEMCDA;
namespace RPG::GameCore { class TaskContext; }

#define MCOKPJCOFJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB88A6B0)
#define MCOKPJCOFJE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB88A6E0)

	class MCOKPJCOFJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NKGIHJEMCDA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NKGIHJEMCDA*))((::PBYTE)hIl2Cpp + MCOKPJCOFJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOKPJCOFJE_EVALUATE_OFFSET))(this);
		}

	};

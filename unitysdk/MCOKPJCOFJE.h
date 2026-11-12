#pragma once
#include "unitysdk/unitysdk.h"
class NKGIHJEMCDA;
namespace RPG::GameCore { class TaskContext; }

#define MCOKPJCOFJE_CTOR_OFFSET UNITYSDK_OFFSET(0xC137290)
#define MCOKPJCOFJE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC1372C0)

inline static constexpr unsigned int MCOKPJCOFJE_TypeDefinitionIndex = 55052;

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

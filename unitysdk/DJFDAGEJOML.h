#pragma once
#include "unitysdk/unitysdk.h"
class ECADOJALGKJ;
namespace RPG::GameCore { class TaskContext; }

#define DJFDAGEJOML_CTOR_OFFSET UNITYSDK_OFFSET(0xF2302E0)
#define DJFDAGEJOML_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF230310)

inline static constexpr unsigned int DJFDAGEJOML_TypeDefinitionIndex = 54160;

	class DJFDAGEJOML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ECADOJALGKJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ECADOJALGKJ*))((::PBYTE)hIl2Cpp + DJFDAGEJOML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFDAGEJOML_EVALUATE_OFFSET))(this);
		}

	};

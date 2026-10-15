#pragma once
#include "unitysdk/unitysdk.h"
class MDCEMPKNOKN;
namespace RPG::GameCore { class TaskContext; }

#define GNIDFBBAMBM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B055E0)
#define GNIDFBBAMBM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B05610)

inline static constexpr unsigned int GNIDFBBAMBM_TypeDefinitionIndex = 54884;

	class GNIDFBBAMBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MDCEMPKNOKN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MDCEMPKNOKN*))((::PBYTE)hIl2Cpp + GNIDFBBAMBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIDFBBAMBM_EVALUATE_OFFSET))(this);
		}

	};

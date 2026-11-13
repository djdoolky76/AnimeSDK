#pragma once
#include "unitysdk/unitysdk.h"
class MDCEMPKNOKN;
namespace RPG::GameCore { class TaskContext; }

#define GNIDFBBAMBM_CTOR_OFFSET UNITYSDK_OFFSET(0x18792E90)
#define GNIDFBBAMBM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18792EC0)

inline static constexpr unsigned int GNIDFBBAMBM_TypeDefinitionIndex = 56055;

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

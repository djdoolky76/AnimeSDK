#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFSVwithGP; }
namespace RPG::GameCore { class TaskContext; }

#define CGPFAFAHMLO_CTOR_OFFSET UNITYSDK_OFFSET(0xCC87C40)
#define CGPFAFAHMLO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCC87C70)

inline static constexpr unsigned int CGPFAFAHMLO_TypeDefinitionIndex = 52556;

	class CGPFAFAHMLO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFSVwithGP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFSVwithGP*))((::PBYTE)hIl2Cpp + CGPFAFAHMLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPFAFAHMLO_EVALUATE_OFFSET))(this);
		}

	};

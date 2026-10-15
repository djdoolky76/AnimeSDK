#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckBloodLinkDead; }
namespace RPG::GameCore { class TaskContext; }

#define HOLEFCLAELL_CTOR_OFFSET UNITYSDK_OFFSET(0x15DAD140)
#define HOLEFCLAELL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DAD170)

inline static constexpr unsigned int HOLEFCLAELL_TypeDefinitionIndex = 54494;

	class HOLEFCLAELL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + HOLEFCLAELL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLEFCLAELL_EVALUATE_OFFSET))(this);
		}

	};

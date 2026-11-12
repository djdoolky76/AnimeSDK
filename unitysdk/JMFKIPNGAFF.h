#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCheckGameMode; }
namespace RPG::GameCore { class TaskContext; }

#define JMFKIPNGAFF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA8D9A0)
#define JMFKIPNGAFF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA8D9D0)

inline static constexpr unsigned int JMFKIPNGAFF_TypeDefinitionIndex = 55614;

	class JMFKIPNGAFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + JMFKIPNGAFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFKIPNGAFF_EVALUATE_OFFSET))(this);
		}

	};

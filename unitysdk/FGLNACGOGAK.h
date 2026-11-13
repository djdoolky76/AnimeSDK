#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByAnimStateLogicType; }
namespace RPG::GameCore { class TaskContext; }

#define FGLNACGOGAK_CTOR_OFFSET UNITYSDK_OFFSET(0x18A92F00)
#define FGLNACGOGAK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18A92F30)

inline static constexpr unsigned int FGLNACGOGAK_TypeDefinitionIndex = 55645;

	class FGLNACGOGAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + FGLNACGOGAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLNACGOGAK_EVALUATE_OFFSET))(this);
		}

	};

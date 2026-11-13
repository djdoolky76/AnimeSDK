#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTriggeredBlockDamage; }
namespace RPG::GameCore { class TaskContext; }

#define MKOIFIBANFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B910F30)
#define MKOIFIBANFA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B910F60)

inline static constexpr unsigned int MKOIFIBANFA_TypeDefinitionIndex = 55863;

	class MKOIFIBANFA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + MKOIFIBANFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOIFIBANFA_EVALUATE_OFFSET))(this);
		}

	};

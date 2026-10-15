#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCharacterDamageType; }
namespace RPG::GameCore { class TaskContext; }

#define JDKEDADCOHB_CTOR_OFFSET UNITYSDK_OFFSET(0x165D39B0)
#define JDKEDADCOHB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x165D39E0)

	class JDKEDADCOHB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + JDKEDADCOHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKEDADCOHB_EVALUATE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsIndirectDamage; }
namespace RPG::GameCore { class TaskContext; }

#define FNDJAKIIDPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1586B130)
#define FNDJAKIIDPF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1586B160)

	class FNDJAKIIDPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + FNDJAKIIDPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDJAKIIDPF_EVALUATE_OFFSET))(this);
		}

	};

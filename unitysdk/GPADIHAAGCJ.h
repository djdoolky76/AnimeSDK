#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasPausedElationTime; }
namespace RPG::GameCore { class TaskContext; }

#define GPADIHAAGCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3C9A0)
#define GPADIHAAGCJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B3C9D0)

	class GPADIHAAGCJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + GPADIHAAGCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPADIHAAGCJ_EVALUATE_OFFSET))(this);
		}

	};

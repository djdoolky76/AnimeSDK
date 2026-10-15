#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByIsInPhantomFrozen; }
namespace RPG::GameCore { class TaskContext; }

#define MCHIMDCGLGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB87F6E0)
#define MCHIMDCGLGJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB87F710)

	class MCHIMDCGLGJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + MCHIMDCGLGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIMDCGLGJ_EVALUATE_OFFSET))(this);
		}

	};

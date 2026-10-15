#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByPlayerHide; }
namespace RPG::GameCore { class TaskContext; }

#define PEIJFNLJGKP_CTOR_OFFSET UNITYSDK_OFFSET(0xC03DC70)
#define PEIJFNLJGKP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC03DCA0)

	class PEIJFNLJGKP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + PEIJFNLJGKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIJFNLJGKP_EVALUATE_OFFSET))(this);
		}

	};

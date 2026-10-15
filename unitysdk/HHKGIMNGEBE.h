#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByBattleHasCertainResult; }
namespace RPG::GameCore { class TaskContext; }

#define HHKGIMNGEBE_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD02A0)
#define HHKGIMNGEBE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15CD02D0)

	class HHKGIMNGEBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + HHKGIMNGEBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKGIMNGEBE_EVALUATE_OFFSET))(this);
		}

	};

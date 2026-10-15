#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByIsLocateAtArea; }
namespace RPG::GameCore { class TaskContext; }

#define GBLIJLCPFJE_CTOR_OFFSET UNITYSDK_OFFSET(0x15952360)
#define GBLIJLCPFJE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15952390)

	class GBLIJLCPFJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + GBLIJLCPFJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLIJLCPFJE_EVALUATE_OFFSET))(this);
		}

	};

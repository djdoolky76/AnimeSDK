#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class AdvByCompareDynamicValue; }
namespace RPG::GameCore { class ByCompareDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define HOMEENCLPPN_CTOR_OFFSET UNITYSDK_OFFSET(0x15DBBBD0)
#define HOMEENCLPPN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DBBD40)

	class HOMEENCLPPN
	{
	public:
		::RPG::GameCore::ByCompareDynamicValue* BCDHGNKEDJG; // 0x28
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x30
		// static const ::System::Object CBLOCGOMEGF; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareDynamicValue*))((::PBYTE)hIl2Cpp + HOMEENCLPPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMEENCLPPN_EVALUATE_OFFSET))(this);
		}

	};

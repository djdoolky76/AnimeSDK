#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionPriority; }
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CONDITIONPRIORITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D47A0)
#define RPG_GAMECORE_CONDITIONPRIORITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D4690)

namespace RPG::GameCore
{
	class ConditionPriority : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OverridePriority; // 0x10
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONPRIORITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionPriority* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONPRIORITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

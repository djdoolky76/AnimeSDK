#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class Match3ActionBase; }
namespace RPG::GameCore::Match3 { class Match3ConditionBase; }
namespace RPG::GameCore::Match3 { class Match3EnvActionConfig; }
namespace RPG::GameCore::Match3 { class Match3TriggerBase; }

#define RPG_GAMECORE_MATCH3_MATCH3ENVACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84E310)
#define RPG_GAMECORE_MATCH3_MATCH3ENVACTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84E1D0)

namespace RPG::GameCore::Match3
{
	class Match3EnvActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::Match3TriggerBase* Trigger; // 0x10
		::RPG::GameCore::Match3::Match3ConditionBase* Condition; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::Match3ActionBase*>* Actions; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ENVACTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3EnvActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3EnvActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ENVACTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

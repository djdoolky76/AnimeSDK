#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonUnitBeAttackConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SUMMONUNITBEATTACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3AA10)
#define RPG_GAMECORE_SUMMONUNITBEATTACKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3A920)

namespace RPG::GameCore
{
	class SummonUnitBeAttackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeAttack; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITBEATTACKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonUnitBeAttackConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonUnitBeAttackConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITBEATTACKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

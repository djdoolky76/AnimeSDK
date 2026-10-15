#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonMonsterConfig; }

#define RPG_GAMECORE_SUMMONMONSTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3A2F0)
#define RPG_GAMECORE_SUMMONMONSTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3A230)

namespace RPG::GameCore
{
	class SummonMonsterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SummonMonsterList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

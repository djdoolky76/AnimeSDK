#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterWaveParamConfig; }
namespace RPG::GameCore { class MonsterWaveParamConfigList; }

#define RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BCFE0)
#define RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BCEF0)

namespace RPG::GameCore
{
	class MonsterWaveParamConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MonsterWaveParamConfig*>* ConfigList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterWaveParamConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterWaveParamConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERWAVEPARAMCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

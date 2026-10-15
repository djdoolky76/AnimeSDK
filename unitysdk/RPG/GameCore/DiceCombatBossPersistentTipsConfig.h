#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatBossPersistentTipsConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATBOSSPERSISTENTTIPSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D7F60)
#define RPG_GAMECORE_DICECOMBATBOSSPERSISTENTTIPSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D7E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatBossPersistentTipsConfig_TypeDefinitionIndex = 16189;

	class DiceCombatBossPersistentTipsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATBOSSPERSISTENTTIPSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatBossPersistentTipsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatBossPersistentTipsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATBOSSPERSISTENTTIPSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

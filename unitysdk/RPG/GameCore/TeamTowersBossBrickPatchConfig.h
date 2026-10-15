#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersBossBrickEntryConfig; }
namespace RPG::GameCore { class TeamTowersBossBrickPatchConfig; }

#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKPATCHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7C1E0)
#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKPATCHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7C0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersBossBrickPatchConfig_TypeDefinitionIndex = 18958;

	class TeamTowersBossBrickPatchConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamTowersBossBrickEntryConfig*>* Bricks; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKPATCHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersBossBrickPatchConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersBossBrickPatchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKPATCHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

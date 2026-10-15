#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersBossBrickPatchConfig; }
namespace RPG::GameCore { class TeamTowersBossBrickSequenceConfig; }

#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7C220)
#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB7C230)
#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7C1F0)

namespace RPG::GameCore
{
	class TeamTowersBossBrickSequenceConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamTowersBossBrickPatchConfig*>* Patches; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersBossBrickSequenceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersBossBrickSequenceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersBossBrickSequenceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersBossBrickSequenceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

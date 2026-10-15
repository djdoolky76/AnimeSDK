#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_ShowBossPersistentTipsView; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6134F0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D613500)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6133C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ShowBossPersistentTipsView_TypeDefinitionIndex = 16190;

	class DiceCombatTaskConfig_ShowBossPersistentTipsView : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::Client::TextID TipsTextID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

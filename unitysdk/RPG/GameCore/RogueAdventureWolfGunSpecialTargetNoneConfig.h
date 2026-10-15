#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureWolfGunSpecialTargetConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureWolfGunSpecialTargetNoneConfig; }

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A46B0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A46C0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A4730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunSpecialTargetNoneConfig_TypeDefinitionIndex = 17897;

	class RogueAdventureWolfGunSpecialTargetNoneConfig : public ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetNoneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetNoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetNoneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetNoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETNONECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureWolfGunSpecialTargetConfigBase; }

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A44A0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A4680)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A44B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunSpecialTargetConfigBase_TypeDefinitionIndex = 17896;

	class RogueAdventureWolfGunSpecialTargetConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

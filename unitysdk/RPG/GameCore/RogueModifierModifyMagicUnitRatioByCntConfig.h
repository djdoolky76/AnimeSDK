#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyMagicUnitRatioByCntConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18020)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18030)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyMagicUnitRatioByCntConfig_TypeDefinitionIndex = 17737;

	class RogueModifierModifyMagicUnitRatioByCntConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

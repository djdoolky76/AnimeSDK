#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyMagicUnitRatioByTagTypeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18080)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18090)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyMagicUnitRatioByTagTypeConfig_TypeDefinitionIndex = 17738;

	class RogueModifierModifyMagicUnitRatioByTagTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByTagTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByTagTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByTagTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByTagTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

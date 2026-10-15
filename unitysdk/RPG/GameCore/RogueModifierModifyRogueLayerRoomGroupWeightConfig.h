#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyRogueLayerRoomGroupWeightConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EAF00)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EAF10)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EAEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyRogueLayerRoomGroupWeightConfig_TypeDefinitionIndex = 17740;

	class RogueModifierModifyRogueLayerRoomGroupWeightConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

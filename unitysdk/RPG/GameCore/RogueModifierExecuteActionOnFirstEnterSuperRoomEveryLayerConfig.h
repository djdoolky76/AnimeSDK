#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16080)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16090)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig_TypeDefinitionIndex = 17864;

	class RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

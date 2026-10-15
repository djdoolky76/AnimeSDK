#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchFuncHexEquipmentConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18950)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18960)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncHexEquipmentConfig_TypeDefinitionIndex = 18035;

	class RogueWorkbenchFuncHexEquipmentConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncHexEquipmentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncHexEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncHexEquipmentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncHexEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

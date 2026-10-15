#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameCustomLoadConditionType.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVarConditionLogic.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameBaseEventAction; }
namespace RPG::GameCore { class LittleGameCustomLoadConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameLevelVarCondition; }
namespace RPG::GameCore { class LittleGameSubMissionCondition; }

#define RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E01D0)
#define RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E0210)
#define RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E0030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCustomLoadConfig_TypeDefinitionIndex = 18869;

	class LittleGameCustomLoadConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCustomLoad; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LittleGameCustomLoadConditionType ConditionType; // 0x14
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::System::Boolean UseLoadCondition; // 0x20
		::System::Byte _padding1[0x7];
		::Il2CppArray<::System::Int16>* LoadValues; // 0x28
		::Il2CppArray<::RPG::GameCore::LittleGameLevelVarCondition*>* Conditions; // 0x30
		::RPG::GameCore::LittleGameLevelVarConditionLogic LogicOfConditions; // 0x38
		::System::Byte _padding2[0x4];
		::Il2CppArray<::RPG::GameCore::LittleGameSubMissionCondition*>* SubMissionConditions; // 0x40
		::RPG::GameCore::LittleGameLevelVarConditionLogic SubMissionLogicOfConditions; // 0x48
		::System::Boolean DoActionOnInitLoad; // 0x4C
		::System::Byte _padding3[0x3];
		::Il2CppArray<::RPG::GameCore::LittleGameBaseEventAction*>* LoadActions; // 0x50
		::Il2CppArray<::RPG::GameCore::LittleGameBaseEventAction*>* UnloadActions; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCustomLoadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCustomLoadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCustomLoadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCustomLoadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMLOADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

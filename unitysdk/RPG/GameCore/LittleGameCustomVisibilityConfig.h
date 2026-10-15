#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVarConditionLogic.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameBaseEventAction; }
namespace RPG::GameCore { class LittleGameCustomVisibilityConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameLevelVarCondition; }

#define RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B2E90)
#define RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B2ED0)
#define RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B2CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCustomVisibilityConfig_TypeDefinitionIndex = 18870;

	class LittleGameCustomVisibilityConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCustomVisibility; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::System::Boolean UseVisibleCondition; // 0x20
		::System::Byte _padding1[0x7];
		::Il2CppArray<::System::Int16>* VisibleValues; // 0x28
		::Il2CppArray<::RPG::GameCore::LittleGameLevelVarCondition*>* Conditions; // 0x30
		::RPG::GameCore::LittleGameLevelVarConditionLogic LogicOfConditions; // 0x38
		::System::Boolean DoActionOnInitVisible; // 0x3C
		::System::Byte _padding2[0x3];
		::Il2CppArray<::RPG::GameCore::LittleGameBaseEventAction*>* VisibleActions; // 0x40
		::Il2CppArray<::RPG::GameCore::LittleGameBaseEventAction*>* InvisibleActions; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCustomVisibilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCustomVisibilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECUSTOMVISIBILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/ModifierDataType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_ModifierData; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E7650)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E7660)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E7600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WriteCustomValue_ModifierData_TypeDefinitionIndex = 16071;

	class DiceCombatTaskConfig_WriteCustomValue_ModifierData : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget WriteTarget; // 0x10
		::RPG::GameCore::DiceCombatTarget ReadTarget; // 0x14
		::System::String* Name; // 0x18
		::System::UInt32 ModifierID; // 0x20
		::RPG::GameCore::ModifierDataType DataType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

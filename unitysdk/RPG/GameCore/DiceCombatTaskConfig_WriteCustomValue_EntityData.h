#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/EntityDataType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_EntityData; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D614CC0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D614CD0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D614C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WriteCustomValue_EntityData_TypeDefinitionIndex = 16073;

	class DiceCombatTaskConfig_WriteCustomValue_EntityData : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget WriteTarget; // 0x10
		::RPG::GameCore::DiceCombatTarget ReadTarget; // 0x14
		::System::String* Name; // 0x18
		::RPG::GameCore::EntityDataType DataType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

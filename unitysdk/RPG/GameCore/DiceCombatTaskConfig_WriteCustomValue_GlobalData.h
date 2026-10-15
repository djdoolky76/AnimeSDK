#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/GlobalDataType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_GlobalData; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E7470)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E7480)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E7420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WriteCustomValue_GlobalData_TypeDefinitionIndex = 16075;

	class DiceCombatTaskConfig_WriteCustomValue_GlobalData : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget WriteTarget; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18
		::RPG::GameCore::GlobalDataType DataType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

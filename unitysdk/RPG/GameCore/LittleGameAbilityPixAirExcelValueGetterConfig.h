#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityPixAirExcelValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D9B10)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D9B20)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D9A20)

namespace RPG::GameCore
{
	class LittleGameAbilityPixAirExcelValueGetterConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::System::Int32 ParamIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

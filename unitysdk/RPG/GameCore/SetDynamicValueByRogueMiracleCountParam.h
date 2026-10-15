#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueMiracleCountParam; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA9DD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA9DE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA9D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueMiracleCountParam_TypeDefinitionIndex = 21799;

	class SetDynamicValueByRogueMiracleCountParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleCountParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueMiracleCountParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleCountParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueMiracleCountParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

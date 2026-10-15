#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueMiracleNum; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA9E20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA9E30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA9DF0)

namespace RPG::GameCore
{
	class SetDynamicValueByRogueMiracleNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

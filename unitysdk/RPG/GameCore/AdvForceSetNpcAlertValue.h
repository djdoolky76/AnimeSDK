#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvForceSetNpcAlertValue; }

#define RPG_GAMECORE_ADVFORCESETNPCALERTVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A0040)
#define RPG_GAMECORE_ADVFORCESETNPCALERTVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A0050)
#define RPG_GAMECORE_ADVFORCESETNPCALERTVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A0010)

namespace RPG::GameCore
{
	class AdvForceSetNpcAlertValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 NpcMonsterID; // 0x1C
		::System::Single Range; // 0x20
		::System::Single AlertValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCESETNPCALERTVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvForceSetNpcAlertValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvForceSetNpcAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCESETNPCALERTVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvForceSetNpcAlertValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvForceSetNpcAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCESETNPCALERTVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

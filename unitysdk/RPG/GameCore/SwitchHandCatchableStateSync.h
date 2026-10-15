#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SwitchHandCatchableStateSync; }

#define RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41CE0)
#define RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB41CF0)
#define RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB41CB0)

namespace RPG::GameCore
{
	class SwitchHandCatchableStateSync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandCatchableStateSync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandCatchableStateSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandCatchableStateSync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandCatchableStateSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

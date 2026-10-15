#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPlayerEnterAlertDeviceTrigger; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AAC90)
#define RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AACA0)
#define RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AAC60)

namespace RPG::GameCore
{
	class AdvPlayerEnterAlertDeviceTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

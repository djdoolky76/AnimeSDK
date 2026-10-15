#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchHandStateSync; }

#define RPG_GAMECORE_SWITCHHANDSTATESYNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB42E70)
#define RPG_GAMECORE_SWITCHHANDSTATESYNC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB42E80)
#define RPG_GAMECORE_SWITCHHANDSTATESYNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB42DB0)

namespace RPG::GameCore
{
	class SwitchHandStateSync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSTATESYNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandStateSync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandStateSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSTATESYNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandStateSync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandStateSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSTATESYNC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

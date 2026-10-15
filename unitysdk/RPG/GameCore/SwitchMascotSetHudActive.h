#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchMascotSetHudActive; }

#define RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB44420)
#define RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB44430)
#define RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB443F0)

namespace RPG::GameCore
{
	class SwitchMascotSetHudActive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotSetHudActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotSetHudActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotSetHudActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotSetHudActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchHandChangeUICoinCntActive; }

#define RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41E60)
#define RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB41E70)
#define RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB41E30)

namespace RPG::GameCore
{
	class SwitchHandChangeUICoinCntActive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsActive; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandChangeUICoinCntActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandChangeUICoinCntActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandChangeUICoinCntActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandChangeUICoinCntActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

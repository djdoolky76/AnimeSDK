#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowFuncBtnEffect; }

#define RPG_GAMECORE_SHOWFUNCBTNEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADD4C0)
#define RPG_GAMECORE_SHOWFUNCBTNEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADD4D0)
#define RPG_GAMECORE_SHOWFUNCBTNEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADD480)

namespace RPG::GameCore
{
	class ShowFuncBtnEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTNEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFuncBtnEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFuncBtnEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTNEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFuncBtnEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFuncBtnEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTNEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

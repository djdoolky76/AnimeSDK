#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitDialogueFinish; }

#define RPG_GAMECORE_WAITDIALOGUEFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC961D0)
#define RPG_GAMECORE_WAITDIALOGUEFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC961E0)
#define RPG_GAMECORE_WAITDIALOGUEFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC96190)

namespace RPG::GameCore
{
	class WaitDialogueFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOwnerEntity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDialogueFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDialogueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDialogueFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDialogueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

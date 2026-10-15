#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfTriggerShowUI; }
namespace System { class String; }

#define RPG_GAMECORE_ELFTRIGGERSHOWUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D639AA0)
#define RPG_GAMECORE_ELFTRIGGERSHOWUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D639AB0)
#define RPG_GAMECORE_ELFTRIGGERSHOWUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D639A70)

namespace RPG::GameCore
{
	class ElfTriggerShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::UInt32 RequireFinishSubMission; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTRIGGERSHOWUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfTriggerShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfTriggerShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTRIGGERSHOWUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfTriggerShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfTriggerShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTRIGGERSHOWUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

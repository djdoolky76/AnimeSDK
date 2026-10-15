#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStoryTriggerAsideDialog; }

#define RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C5D70)
#define RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C5D80)
#define RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C5D30)

namespace RPG::GameCore
{
	class ClockParkStoryTriggerAsideDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsAside; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID TextID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStoryCharacterTriggerDialog; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D596990)
#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5969A0)
#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D596960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryCharacterTriggerDialog_TypeDefinitionIndex = 20945;

	class ClockParkStoryCharacterTriggerDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::Client::TextID TextID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

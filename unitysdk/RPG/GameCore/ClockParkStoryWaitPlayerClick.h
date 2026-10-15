#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStoryWaitPlayerClick; }

#define RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C5F80)
#define RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C5F90)
#define RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C5F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryWaitPlayerClick_TypeDefinitionIndex = 20947;

	class ClockParkStoryWaitPlayerClick : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean CloseAllDialogOnClicked; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryWaitPlayerClick* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryWaitPlayerClick*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryWaitPlayerClick* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryWaitPlayerClick*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

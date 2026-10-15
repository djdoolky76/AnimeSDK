#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfWaiterProcessEvent; }

#define RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4FD20)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4FD30)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4FCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterProcessEvent_TypeDefinitionIndex = 21523;

	class ST_Main_ElfWaiterProcessEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single LookAtDuration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

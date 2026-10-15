#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfWaiterSuperEventReady; }

#define RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA501A0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA501B0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA500E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterSuperEventReady_TypeDefinitionIndex = 21524;

	class ST_Main_ElfWaiterSuperEventReady : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

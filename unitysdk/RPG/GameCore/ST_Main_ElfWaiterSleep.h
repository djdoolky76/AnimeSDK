#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfWaiterSleep; }

#define RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4FFC0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4FFD0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4FF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterSleep_TypeDefinitionIndex = 21527;

	class ST_Main_ElfWaiterSleep : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterSleep* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterSleep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterSleep* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterSleep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSLEEP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

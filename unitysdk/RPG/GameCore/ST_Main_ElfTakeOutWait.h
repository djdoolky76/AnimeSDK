#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfTakeOutWait; }

#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4F5E0)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4F5F0)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4F520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfTakeOutWait_TypeDefinitionIndex = 21538;

	class ST_Main_ElfTakeOutWait : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfTakeOutWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfTakeOutWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfTakeOutWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfTakeOutWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTWAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

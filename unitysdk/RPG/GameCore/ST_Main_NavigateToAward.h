#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_NavigateToAward; }

#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC97F90)
#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC97FA0)
#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC97ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_NavigateToAward_TypeDefinitionIndex = 22847;

	class ST_Main_NavigateToAward : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_NavigateToAward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_NavigateToAward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_NavigateToAward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_NavigateToAward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

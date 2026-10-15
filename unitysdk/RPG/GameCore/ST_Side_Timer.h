#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_Timer; }

#define RPG_GAMECORE_ST_SIDE_TIMER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA598E0)
#define RPG_GAMECORE_ST_SIDE_TIMER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA598F0)
#define RPG_GAMECORE_ST_SIDE_TIMER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA598B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Timer_TypeDefinitionIndex = 20149;

	class ST_Side_Timer : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Time; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TIMER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Timer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Timer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TIMER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Timer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Timer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TIMER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PerformanceReplay_SetFloorSavedValue; }

#define RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9023A0)
#define RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9023B0)
#define RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D902370)

namespace RPG::GameCore
{
	class PerformanceReplay_SetFloorSavedValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* DynamicName; // 0x18
		::System::Int16 Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

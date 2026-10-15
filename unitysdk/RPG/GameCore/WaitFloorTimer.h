#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitFloorTimer; }

#define RPG_GAMECORE_WAITFLOORTIMER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC988A0)
#define RPG_GAMECORE_WAITFLOORTIMER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC988B0)
#define RPG_GAMECORE_WAITFLOORTIMER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC98870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorTimer_TypeDefinitionIndex = 20478;

	class WaitFloorTimer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single OnSecond; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORTIMER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFloorTimer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFloorTimer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORTIMER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFloorTimer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFloorTimer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORTIMER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

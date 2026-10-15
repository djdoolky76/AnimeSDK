#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckTurnStateAxis; }

#define RPG_GAMECORE_CHECKTURNSTATEAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57D2B0)
#define RPG_GAMECORE_CHECKTURNSTATEAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57D2C0)
#define RPG_GAMECORE_CHECKTURNSTATEAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57D280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckTurnStateAxis_TypeDefinitionIndex = 15508;

	class CheckTurnStateAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::TurnState TargetTurnState; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint CheckScore; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTURNSTATEAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckTurnStateAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckTurnStateAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTURNSTATEAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckTurnStateAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckTurnStateAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTURNSTATEAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

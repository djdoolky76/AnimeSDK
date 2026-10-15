#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetSummonUnitAutoHide; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETSUMMONUNITAUTOHIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA95E40)
#define RPG_GAMECORE_SETSUMMONUNITAUTOHIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA95E50)
#define RPG_GAMECORE_SETSUMMONUNITAUTOHIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA95E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSummonUnitAutoHide_TypeDefinitionIndex = 20163;

	class SetSummonUnitAutoHide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Boolean AutoHide; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITAUTOHIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSummonUnitAutoHide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSummonUnitAutoHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITAUTOHIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSummonUnitAutoHide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSummonUnitAutoHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITAUTOHIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

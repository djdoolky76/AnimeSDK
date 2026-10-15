#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntityStopTurnInPlace; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D370F50)
#define RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D370F60)
#define RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D370F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityStopTurnInPlace_TypeDefinitionIndex = 20547;

	class AdvEntityStopTurnInPlace : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::System::Boolean ForceToStandby; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single ForceToStandbyTransitionTime; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityStopTurnInPlace* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityStopTurnInPlace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityStopTurnInPlace* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityStopTurnInPlace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPTURNINPLACE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

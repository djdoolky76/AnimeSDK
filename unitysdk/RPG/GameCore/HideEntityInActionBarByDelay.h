#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideEntityInActionBarByDelay; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73AA30)
#define RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73AA40)
#define RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73AA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEntityInActionBarByDelay_TypeDefinitionIndex = 22949;

	class HideEntityInActionBarByDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FixPoint Delay; // 0x20
		::System::Boolean IsCancelHide; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEntityInActionBarByDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEntityInActionBarByDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEntityInActionBarByDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEntityInActionBarByDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

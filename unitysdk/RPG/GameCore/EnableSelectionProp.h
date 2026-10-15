#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableSelectionProp; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLESELECTIONPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D640C00)
#define RPG_GAMECORE_ENABLESELECTIONPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D640C30)
#define RPG_GAMECORE_ENABLESELECTIONPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D640BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableSelectionProp_TypeDefinitionIndex = 22025;

	class EnableSelectionProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESELECTIONPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableSelectionProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableSelectionProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESELECTIONPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableSelectionProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableSelectionProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESELECTIONPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

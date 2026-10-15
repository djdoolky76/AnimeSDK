#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DisableSelectionProp; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DISABLESELECTIONPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E9C30)
#define RPG_GAMECORE_DISABLESELECTIONPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E9C60)
#define RPG_GAMECORE_DISABLESELECTIONPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E9BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableSelectionProp_TypeDefinitionIndex = 22024;

	class DisableSelectionProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESELECTIONPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableSelectionProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableSelectionProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESELECTIONPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableSelectionProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableSelectionProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESELECTIONPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

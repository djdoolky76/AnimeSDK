#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearActionBarHighlightEntity; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D587AE0)
#define RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D587AF0)
#define RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D587AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearActionBarHighlightEntity_TypeDefinitionIndex = 23256;

	class ClearActionBarHighlightEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearActionBarHighlightEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearActionBarHighlightEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearActionBarHighlightEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearActionBarHighlightEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

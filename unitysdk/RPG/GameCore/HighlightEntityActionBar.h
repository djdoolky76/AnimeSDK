#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HighlightEntityActionBar; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73C780)
#define RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73C790)
#define RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73C750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HighlightEntityActionBar_TypeDefinitionIndex = 23697;

	class HighlightEntityActionBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HighlightEntityActionBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HighlightEntityActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HighlightEntityActionBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HighlightEntityActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

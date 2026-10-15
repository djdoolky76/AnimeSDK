#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetArrowCollectCoinAction; }

#define RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D8BD0)
#define RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D8BE0)
#define RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D8B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetArrowCollectCoinAction_TypeDefinitionIndex = 18781;

	class FiveDimSetArrowCollectCoinAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

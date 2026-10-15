#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRogueRoomCompositionType; }

#define RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A2760)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A2770)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A2720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueRoomCompositionType_TypeDefinitionIndex = 20803;

	class ByCompareRogueRoomCompositionType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueRoomCompositionType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueRoomCompositionType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueRoomCompositionType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueRoomCompositionType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMCOMPOSITIONTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

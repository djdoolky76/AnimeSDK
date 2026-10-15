#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RotatableRegionLoadingState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRotatableRegionLoadingState; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A2920)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A2B80)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A2B50)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A2930)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A28F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRotatableRegionLoadingState_TypeDefinitionIndex = 20914;

	class ByCompareRotatableRegionLoadingState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RegionIndex; // 0x20
		::RPG::GameCore::RotatableRegionLoadingState CompareState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

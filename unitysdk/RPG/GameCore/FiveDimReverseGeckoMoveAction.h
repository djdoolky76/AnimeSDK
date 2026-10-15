#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimReverseGeckoMoveAction; }

#define RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9E20)
#define RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A9E30)
#define RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A9DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimReverseGeckoMoveAction_TypeDefinitionIndex = 18733;

	class FiveDimReverseGeckoMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

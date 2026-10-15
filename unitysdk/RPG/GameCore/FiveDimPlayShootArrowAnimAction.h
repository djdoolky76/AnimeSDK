#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPlayShootArrowAnimAction; }

#define RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D0F90)
#define RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D0FA0)
#define RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D0F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayShootArrowAnimAction_TypeDefinitionIndex = 18727;

	class FiveDimPlayShootArrowAnimAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

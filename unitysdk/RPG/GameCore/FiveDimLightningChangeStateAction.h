#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimLightningChangeStateAction; }

#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C6FD0)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C6FE0)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C6FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLightningChangeStateAction_TypeDefinitionIndex = 18783;

	class FiveDimLightningChangeStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimLightningStateType LightningState; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLightningChangeStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLightningChangeStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

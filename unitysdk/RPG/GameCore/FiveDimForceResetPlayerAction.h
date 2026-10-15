#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimForceResetPlayerAction; }

#define RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6922B0)
#define RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6922C0)
#define RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D692240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimForceResetPlayerAction_TypeDefinitionIndex = 18687;

	class FiveDimForceResetPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimForceResetPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimForceResetPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

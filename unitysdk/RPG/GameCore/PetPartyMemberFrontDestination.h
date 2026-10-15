#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetPartyNavigateDestination.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyMemberFrontDestination; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90A2A0)
#define RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90A2C0)
#define RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90A240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyMemberFrontDestination_TypeDefinitionIndex = 21084;

	class PetPartyMemberFrontDestination : public ::RPG::GameCore::PetPartyNavigateDestination
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReferenceTarget; // 0x10
		::System::Single SurfaceGap; // 0x18
		::System::Single PositionTolerance; // 0x1C
		::System::Single FacingAngleTolerance; // 0x20
		::System::Boolean ContinueInteractionOnNavigateFailure; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyMemberFrontDestination* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyMemberFrontDestination*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyMemberFrontDestination* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyMemberFrontDestination*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

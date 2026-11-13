#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TravelShipFollowTo; }

#define RPG_GAMECORE_TRAVELSHIPFOLLOWTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E317F20)
#define RPG_GAMECORE_TRAVELSHIPFOLLOWTO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E317F60)
#define RPG_GAMECORE_TRAVELSHIPFOLLOWTO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E317EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipFollowTo_TypeDefinitionIndex = 21311;

	class TravelShipFollowTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPFOLLOWTO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipFollowTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipFollowTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPFOLLOWTO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipFollowTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipFollowTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPFOLLOWTO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

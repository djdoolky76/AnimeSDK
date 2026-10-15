#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FormationMoveSetGroupToStation; }

#define RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EB620)
#define RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EB630)
#define RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EB5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveSetGroupToStation_TypeDefinitionIndex = 21260;

	class FormationMoveSetGroupToStation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18
		::System::UInt32 GroupId; // 0x1C
		::RPG::GameCore::DynamicFloat* StationIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveSetGroupToStation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveSetGroupToStation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveSetGroupToStation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveSetGroupToStation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

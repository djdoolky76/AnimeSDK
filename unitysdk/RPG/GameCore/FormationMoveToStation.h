#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationMoveToStation; }

#define RPG_GAMECORE_FORMATIONMOVETOSTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EB9B0)
#define RPG_GAMECORE_FORMATIONMOVETOSTATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EB9C0)
#define RPG_GAMECORE_FORMATIONMOVETOSTATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EB980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveToStation_TypeDefinitionIndex = 21261;

	class FormationMoveToStation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18
		::System::UInt32 GroupId; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVETOSTATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveToStation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveToStation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVETOSTATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveToStation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveToStation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVETOSTATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

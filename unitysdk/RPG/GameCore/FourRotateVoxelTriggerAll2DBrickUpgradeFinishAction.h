#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction; }

#define RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C4A60)
#define RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C4A70)
#define RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C49F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction_TypeDefinitionIndex = 16773;

	class FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

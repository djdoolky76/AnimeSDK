#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationTargetDistanceConfig; }
namespace RPG::GameCore { class MoveTeamRootPosByTargetDistance; }

#define RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88FB40)
#define RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D88FB50)
#define RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88FB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveTeamRootPosByTargetDistance_TypeDefinitionIndex = 22636;

	class MoveTeamRootPosByTargetDistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MoveTarget; // 0x18
		::System::Boolean Reset; // 0x19
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::FormationTargetDistanceConfig*>* DistanceConfigList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveTeamRootPosByTargetDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveTeamRootPosByTargetDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveTeamRootPosByTargetDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveTeamRootPosByTargetDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

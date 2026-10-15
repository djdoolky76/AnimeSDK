#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestoreTeamFormationSnapshot; }
namespace System { class String; }

#define RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9697F0)
#define RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D969800)
#define RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9697B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestoreTeamFormationSnapshot_TypeDefinitionIndex = 22487;

	class RestoreTeamFormationSnapshot : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* FormationSnapshotName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestoreTeamFormationSnapshot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestoreTeamFormationSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestoreTeamFormationSnapshot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestoreTeamFormationSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

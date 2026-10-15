#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateTeamFormationSnapshot; }
namespace System { class String; }

#define RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B92A0)
#define RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B92B0)
#define RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B9260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateTeamFormationSnapshot_TypeDefinitionIndex = 22486;

	class CreateTeamFormationSnapshot : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* FormationSnapshotName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateTeamFormationSnapshot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateTeamFormationSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateTeamFormationSnapshot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateTeamFormationSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

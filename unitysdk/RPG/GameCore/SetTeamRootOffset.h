#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTeamRootOffset; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTEAMROOTOFFSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC7180)
#define RPG_GAMECORE_SETTEAMROOTOFFSET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC7190)
#define RPG_GAMECORE_SETTEAMROOTOFFSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC7150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTeamRootOffset_TypeDefinitionIndex = 22498;

	class SetTeamRootOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Boolean Reset; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TargetEvaluator* OriginPosTargetType; // 0x20
		::RPG::MVector3 Offset; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMROOTOFFSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTeamRootOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTeamRootOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMROOTOFFSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTeamRootOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTeamRootOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMROOTOFFSET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

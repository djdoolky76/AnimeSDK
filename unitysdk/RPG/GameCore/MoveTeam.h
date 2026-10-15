#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MoveTeam; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MOVETEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BD1D0)
#define RPG_GAMECORE_MOVETEAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BD1E0)
#define RPG_GAMECORE_MOVETEAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BD190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveTeam_TypeDefinitionIndex = 22637;

	class MoveTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::MVector3 Offset; // 0x28
		::System::Boolean IsLocalOffset; // 0x34
		::System::Boolean RevertLastRecordOffset; // 0x35
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

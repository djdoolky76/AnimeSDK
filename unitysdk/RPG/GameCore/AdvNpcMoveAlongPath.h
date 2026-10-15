#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PatrolMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcMoveAlongPath; }
namespace RPG::GameCore { class TaskConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVNPCMOVEALONGPATH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37A740)
#define RPG_GAMECORE_ADVNPCMOVEALONGPATH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37A750)
#define RPG_GAMECORE_ADVNPCMOVEALONGPATH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37A700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcMoveAlongPath_TypeDefinitionIndex = 20332;

	class AdvNpcMoveAlongPath : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PatrolMode TaskMode; // 0x18
		::RPG::GameCore::CharacterMotionFlag DefaultMotionFlag; // 0x1C
		::System::Boolean StayOnWaypoint; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single StayOnWaypointDuration; // 0x24
		::RPG::GameCore::TaskConfig* OnWaypointTask; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::TaskConfig*>* PerWaypointTask; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CharacterMotionFlag>* OverrideMotionFlag; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVEALONGPATH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcMoveAlongPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcMoveAlongPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVEALONGPATH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcMoveAlongPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcMoveAlongPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVEALONGPATH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

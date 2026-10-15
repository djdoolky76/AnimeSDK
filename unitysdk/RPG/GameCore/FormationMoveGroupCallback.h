#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationMoveGroupCallback; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EB000)
#define RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EB010)
#define RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EAFD0)

namespace RPG::GameCore
{
	class FormationMoveGroupCallback : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupId; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReachCurveEnd; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCurveEndTeleport; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveGroupCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveGroupCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveGroupCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveGroupCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

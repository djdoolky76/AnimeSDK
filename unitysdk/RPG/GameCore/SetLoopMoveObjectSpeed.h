#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetLoopMoveObjectSpeed; }
namespace System { class String; }

#define RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB8770)
#define RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB8780)
#define RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB8740)

namespace RPG::GameCore
{
	class SetLoopMoveObjectSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::Single MoveSpeed; // 0x20
		::System::Single Duration; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLoopMoveObjectSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLoopMoveObjectSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLoopMoveObjectSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLoopMoveObjectSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

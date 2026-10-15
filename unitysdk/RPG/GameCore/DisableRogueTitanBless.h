#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DisableRogueTitanBless; }

#define RPG_GAMECORE_DISABLEROGUETITANBLESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6174E0)
#define RPG_GAMECORE_DISABLEROGUETITANBLESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6174F0)
#define RPG_GAMECORE_DISABLEROGUETITANBLESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6174B0)

namespace RPG::GameCore
{
	class DisableRogueTitanBless : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRevert; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 MazeBuffID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEROGUETITANBLESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableRogueTitanBless* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableRogueTitanBless*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEROGUETITANBLESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableRogueTitanBless* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableRogueTitanBless*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEROGUETITANBLESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

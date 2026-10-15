#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetVirtualLineupBindPlane; }

#define RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9E60)
#define RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC9E70)
#define RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC9E20)

namespace RPG::GameCore
{
	class SetVirtualLineupBindPlane : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetVirtualLineupBindPlane* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetVirtualLineupBindPlane*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetVirtualLineupBindPlane* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetVirtualLineupBindPlane*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIRTUALLINEUPBINDPLANE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

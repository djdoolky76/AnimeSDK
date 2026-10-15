#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveVirtualLineupBindPlane; }

#define RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D987020)
#define RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D987030)
#define RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D986FE0)

namespace RPG::GameCore
{
	class RemoveVirtualLineupBindPlane : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveVirtualLineupBindPlane* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveVirtualLineupBindPlane*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveVirtualLineupBindPlane* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveVirtualLineupBindPlane*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEVIRTUALLINEUPBINDPLANE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnterFloor; }

#define RPG_GAMECORE_ENTERFLOOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D644790)
#define RPG_GAMECORE_ENTERFLOOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6447A0)
#define RPG_GAMECORE_ENTERFLOOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D644760)

namespace RPG::GameCore
{
	class EnterFloor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 FloorID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLOOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterFloor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterFloor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLOOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterFloor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterFloor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLOOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondIsBenchPosFullConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7280C0)
#define RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7280D0)
#define RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D728080)

namespace RPG::GameCore
{
	class GridFightCondIsBenchPosFullConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
